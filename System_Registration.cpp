#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int choice, age;
    string username, password, old_password, new_password, confirm_password;
    string line, stored_username, stored_password;

    cout << "    Security System" << endl;
    cout << "_____________________________" << endl << endl;
    cout << "|        1.Register          |" << endl;
    cout << "|        2.Login             |" << endl;
    cout << "|        3.Change password   |" << endl;
    cout << "|________4.End Program_______|" << endl << endl;

    do {
        cout << endl << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                cout << "__________________________________" << endl << endl;
                cout << "|             Register            |" << endl;
                cout << "|_________________________________|" << endl << endl;
                cout << "Please enter username: ";
                cin >> username;
                cout << "Please enter password: ";
                cin >> password;
                cout << "Please enter your age: ";
                cin >> age;

                ofstream of1("file.txt");
                if (of1.is_open()) {
                    of1 << username << "\n" << password << "\n" << age << endl;
                    cout << "Registration successful" << endl;
                }
                of1.close();
                break;
            }
            case 2: {
                ifstream if2("file.txt");
                if (if2.is_open()) {
                    getline(if2, stored_username);
                    getline(if2, stored_password);
                    cout << "Please enter the username: ";
                    cin >> username;
                    cout << "Please enter the password: ";
                    cin >> password;

                    if (username == stored_username && password == stored_password) {
                        cout << "---Log in successful---" << endl << endl;
                    } else {
                        cout << endl << endl;
                        cout << "Incorrect Credentials" << endl;
                    }
                }
                if2.close();
                break;
            }
            case 3: {
                ifstream if0("file.txt");
                if (if0.is_open()) {
                    getline(if0, stored_username);
                    getline(if0, stored_password);
                    cout << "Enter the old password: ";
                    cin >> old_password;
                    if (old_password == stored_password) {
                        cout << "Enter your new password: ";
                        cin >> new_password;
                        cout << "Enter your password again: ";
                        cin >> confirm_password;
                        if (new_password == confirm_password) {
                            ofstream of1("file.txt");
                            of1 << stored_username << "\n" << new_password << endl;
                            cout << "Password changed successfully" << endl;
                        } else {
                            cout << "Passwords do not match" << endl;
                        }
                    } else {
                        cout << "Incorrect old password" << endl;
                    }
                }
                if0.close();
                break;
            }
            case 4:
                cout << "____________Thank you!____________" << endl;
                break;
            default:
                cout << "Enter a valid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
