#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher, const std::string& input) {
    std::string result;
    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (index < 0 || index > 25) {
                continue; // Handle uppercase letters or non-alphabetic characters
            }
            result += cipher[index];
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, input;
    std::cin >> cipher1 >> cipher2 >> input;
    std::cout << substitutionCipher(cipher1 + cipher2, input) << std::endl;
    return 0;
}