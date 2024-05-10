# Simple Security System

This repository contains a simple command-line based security system implemented in C++. It allows a user to register, log in, and change their password. The application stores user credentials in a file, which is used for authentication and data retrieval purposes.

## Features

- **User Registration:** Allows new users to register by entering a username, password, and age. The details are saved to a file for later use.
- **Login System:** Users can log in using their username and password. Authentication is performed by checking against the stored credentials in the file.
- **Password Management:** Enables users to change their password after providing the correct current password.

## Installation

To run this project, you will need a C++ compiler that supports C++11 (or later). The project uses standard C++ libraries only.

### Cloning the Repository

Start by cloning this repository to your local machine:

```bash
git clone https://github.com/yourusername/simple-security-system.git
cd simple-security-system
```
#### Compiling the Code
Compile the code using a C++ compiler. For example, if you are using g++, you can compile the project with:
```
g++ -o security_system main.cpp
```
##### Usage
Run the executable from the command line:
```
./security_system
```
Once started, the application will present you with the following options:

Register: Enter 1 and provide the required details (username, password, and age).
Login: Enter 2 and authenticate using your credentials.
Change Password: Enter 3 to change your password after logging in.
End Program: Enter 4 to exit the application.
