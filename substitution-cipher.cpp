#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    
    for (char c : message) {
        int index = c - 'a'; // Convert character to 0-indexed position
        if (index >= 0 && index < cipher1.length()) { // Check if the character is in the range of cipher1
            decipheredMessage += cipher2[index]; // Append the corresponding character from cipher2
        } else {
            decipheredMessage += c; // If not, append the original character
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}