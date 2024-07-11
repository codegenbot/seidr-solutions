```cpp
#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            char newChar = cipherMap[(c - 'a')];
            output += newChar;
        } else if (c >= 'A' && c <= 'Z') {
            char newChar = cipherMap[(c - 'A')];
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