#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher, const std::string& substitution) {
    std::string result;
    for (char c : cipher) {
        size_t index = c - 'a';
        if (index >= 0 && index < substitution.length()) {
            result += substitution[index];
        } else {
            result += c; // Leave other characters unchanged
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipher(cipher1 + cipher2, cipher2) << std::endl;
    return 0;
}