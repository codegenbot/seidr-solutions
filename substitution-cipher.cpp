#include <vector>
#include <iostream>
#include <string>

std::string applyCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        size_t index = 0;
        while (index < cipherMap.size()) {
            if (cipherMap[index] == c) {
                break;
            }
            index++;
        }
        if (index >= cipherMap.size()) {
            output += c; // If the character is not found in the cipher map, add it as is
        } else {
            output += cipherMap.substr(index, 1);
        }
    }
    return output;
}

int main() {
    std::string cipherMap1, cipherMap2, input;
    std::cin >> cipherMap1 >> cipherMap2 >> input;
    std::cout << applyCipher(cipherMap1 + cipherMap2, input) << std::endl;
    return 0;
}