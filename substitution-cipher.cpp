#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher_map, const std::string& input) {
    std::string result;
    for (char c : input) {
        int index = c - 'a';
        if (index >= 0 && index < cipher_map.size()) {
            result += cipher_map[index];
        } else {
            result += c; // leave non-alphabetic characters unchanged
        }
    }
    return result;
}

int main() {
    std::string cipher_map, input;
    std::cin >> cipher_map >> input;
    std::cout << decipher(cipher_map, input) << std::endl;
    return 0;
}