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
        if (std::string::npos == pos) {
            result += c; // not found in the map, append as is
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