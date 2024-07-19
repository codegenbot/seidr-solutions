#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& text) {
    std::string result;
    for (char c : text) {
        size_t pos = 0;
        while ((pos = cipherMap.find(c, pos)) != std::string::npos) {
            result += cipherMap.at(pos);
            pos += 1;
        }
        if (pos == std::string::npos) {
            result += c; // handle cases where characters in the text are not found in the cipher map
        }
    }
    return result;
}

int main() {
    std::string cipherMap, text;
    std::cin >> cipherMap >> text;
    std::cout << substitutionCipher(cipherMap, text) << std::endl;
    return 0;
}