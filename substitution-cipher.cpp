#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& message) {
    std::string decipheredMessage;

    for (char c : message) {
        if (c == ' ') {
            decipheredMessage += ' ';
        } else {
            int index = cipherMap.find(c);
            if (index != std::string::npos) {
                decipheredMessage += cipherMap[index];
            } else {
                decipheredMessage += c;
            }
        }
    }

    return decipheredMessage;
}

int main() {
    std::string cipherMap, message;

    // Read the first two strings
    std::cout << "Enter the first string (cipher map): ";
    std::cin >> cipherMap;
    std::cout << "Enter the second string: ";
    std::cin >> message;

    // Apply the cipher to the third string
    std::string decipheredMessage = substitutionCipher(cipherMap, message);

    // Print the deciphered message
    std::cout << "Deciphered message: " << decipheredMessage << std::endl;

    return 0;
}