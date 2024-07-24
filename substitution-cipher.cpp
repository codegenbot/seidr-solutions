#include <vector>
#include <iostream>
#include <string>

std::string applySubstitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    for (char c : message) {
        int index = c - 'a'; // Calculate the index of the character in the alphabet
        if (index >= 0 && index < cipher1.length()) {
            decipheredMessage += cipher2[index]; // Apply the cipher and add to the result
        } else {
            decipheredMessage += c; // If the character is not in the cipher, just add it as is
        }
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << applySubstitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}