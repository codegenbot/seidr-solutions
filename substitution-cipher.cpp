#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c == '\0') break; // Assuming the input strings are null-terminated
        size_t index = c - 'a'; // Assuming lowercase English letters only
        if (index >= cipher1.size()) {
            result += c; // If the character is not in the cipher, leave it as is
        } else {
            result += cipher2[index]; // Apply the cipher to the character
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