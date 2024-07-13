#include <vector>
#include <iostream>
#include <string>

std::string applySubstitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    for (char c : message) {
        int index = c - 'a'; // Assuming all characters are lowercase letters
        if (index >= 0 && index < cipher1.length()) {
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += c; // If the character is not in the alphabet, keep it as it is
        }
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first cipher: ";
    std::cin >> cipher1;
    std::cout << "Enter the second cipher: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to be deciphered: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << applySubstitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}