#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher_map, const std::string& message) {
    std::string result;
    for (char c : message) {
        int index = c - 'a';
        if (index >= 0 && index < cipher_map.size()) {
            result += cipher_map[index];
        } else {
            result += c; // leave non-alphabet characters unchanged
        }
    }
    return result;
}

int main() {
    std::string cipher_map1, message1;
    std::cin >> cipher_map1 >> message1;
    std::cout << decipher(cipher_map1, message1) << std::endl;

    return 0;
}