#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher_map, const std::string& text) {
    std::string result;
    for (char c : text) {
        size_t idx = 0;
        while (idx < cipher_map.size()) {
            if (cipher_map[idx] == c) {
                break;
            }
            idx++;
        }
        if (idx >= cipher_map.size()) {
            result += c; // If the character is not found in the cipher map, add it as is
        } else {
            result += cipher_map.substr(idx, 1);
        }
    }
    return result;
}

int main() {
    std::string cipher_map, text;
    std::cin >> cipher_map >> text;
    std::cout << decipher(cipher_map, text) << std::endl;
    return 0;
}