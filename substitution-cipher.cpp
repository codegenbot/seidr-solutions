#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string &cipherMap1, const std::string &cipherMap2, const std::string &input) {
    std::string result;
    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (index < cipherMap1.size()) {
                result += cipherMap2[index];
            } else {
                result += c;
            }
        } else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            if (index < cipherMap1.size()) {
                result += toupper(cipherMap2[index] - 'a' + 'A');
            } else {
                result += c;
            }
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipherMap1, cipherMap2, input;
    std::cin >> cipherMap1 >> cipherMap2 >> input;
    std::cout << substitutionCipher(cipherMap1, cipherMap2, input) << std::endl;
    return 0;
}