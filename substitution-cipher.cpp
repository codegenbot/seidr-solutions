#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c == '\0') break; // Assuming the input strings are null-terminated
        int index = c - 'a'; // Assuming lowercase letters only
        if (index >= 0 && index < cipher1.length()) {
            char mappedChar = cipher2[index];
            result += mappedChar;
        } else {
            result += c;
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