#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher1.length()) {
            result += cipher2[cipher1.find(message[i])];
        } else {
            result += message[i];
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}