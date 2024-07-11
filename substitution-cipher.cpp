#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        char newChar = cipherMap[(c >= 'a' && c <= 'z') ? (c - 'a') : ((c >= 'A' && c <= 'Z') ? (c - 'A') : c)];
        output += newChar;
    }
    return output;
}

int main() {
    std::string cipherMap, input;
    std::cin >> cipherMap >> input;
    std::cout << substitutionCipher(cipherMap, input) << std::endl;
    return 0;
}