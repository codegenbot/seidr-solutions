#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            char newChar = cipherMap[index];
            output += newChar;
        } else if (c >= 'A' && c <= 'Z') {
            int index = tolower(c) - 'a';
            char newChar = cipherMap[index];
            output += newChar;
        } else {
            output += c;
        }
    }
    return output;
}

int main() {
    std::string cipherMap, input;
    std::cin >> cipherMap >> input;
    std::cout << substitutionCipher(cipherMap, input) << std::endl;
    return 0;
}