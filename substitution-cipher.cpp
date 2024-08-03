#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c == '\0') break; // Check for null termination
        for (int i = 0; i < cipher1.length(); ++i) {
            if (cipher1[i] == c) {
                result += cipher2[i];
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << '\n';
    return 0;
}