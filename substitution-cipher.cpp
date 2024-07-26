#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        int idx = c - 'a';  // Assuming lowercase English alphabet
        if (idx >= 0 && idx < 26) {  // Check if the character is a letter
            result += cipher2[idx];  // Apply the cipher
        } else {
            result += c;  // If not a letter, just add it as is
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
    std::cout << "Deciphered message: " << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}