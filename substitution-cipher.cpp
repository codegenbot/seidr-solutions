#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            result += cipher2[index];
        } else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            result += toupper(cipher2[index]);
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