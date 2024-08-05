#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipherMap, const std::string& message) {
    std::string decipheredMessage;

    for (char c : message) {
        int index = c - 'a';
        if (index >= 0 && index < cipherMap.length()) {
            decipheredMessage += cipherMap[index];
        } else {
            decipheredMessage += c;
        }
    }

    return decipheredMessage;
}

int main() {
    std::string cipherMap, message;

    // Read input from user
    std::cout << "Enter the first string (cipher map): ";
    std::cin >> cipherMap;
    std::cout << "Enter the second string: ";
    std::cin >> message;

    // Apply the cipher to the message
    std::string decipheredMessage = decipher(cipherMap, message);

    // Print the deciphered message
    std::cout << "Deciphered message: " << decipheredMessage << std::endl;

    return 0;
}