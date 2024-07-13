#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c == '\0') break; // Assuming the input string is null-terminated
        int index = c - 'a'; // Calculate the index in the cipher strings
        if (index >= 0 && index < cipher1.length()) {
            result += cipher2[index]; // Apply the cipher to the message character
        } else {
            result += c; // If the character is not in the alphabet, leave it as is
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}