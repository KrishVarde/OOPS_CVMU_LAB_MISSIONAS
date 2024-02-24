#include <iostream>
#include <string> // for std::string

class Bank {
private:
    std::string password="password"; // Using std::string for password
public:
    bool login(const std::string& inputPassword); // Function declaration for login
};

bool Bank::login(const std::string& inputPassword) {
    // Compare the user input password with the stored password
    if (inputPassword == password) {
        std::cout << "Login successful!" << std::endl;
        return true;
    } else {
        std::cout << "Login failed. Incorrect password." << std::endl;
        return false;
    }
}

int main() {
    // Example usage
    Bank user;

    std::string inputPassword;
    std::cout << "Enter your password: ";
    std::cin >> inputPassword;

    user.login(inputPassword); // Attempt login

    return 0;
}
