#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    string result = "";
    for (char c : message) {
        bool found = false;
        for (int i = 0; i < cipher1.length(); i++) {
            if (c == cipher1[i]) {
                result += cipher2[i];
                found = true;
                break;
            }
        }
        if (!found) {
            result += c; // If the character is not in cipher1, add it as is
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first part of the cipher: ";
    std::cin >> cipher1;
    std::cout << "Enter the second part of the cipher: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}