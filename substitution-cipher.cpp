#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher_map, const std::string& message) {
    std::string result;
    for (char c : message) {
        int index = c - 'a'; // assuming all characters are lowercase letters
        if (index >= 0 && index < cipher_map.size()) {
            result += cipher_map[index];
        } else {
            result += c; // leave the character unchanged if it's not in the map
        }
    }
    return result;
}

int main() {
    std::string cipher_map, message;
    std::cin >> cipher_map >> message;
    std::cout << decipher(cipher_map, message) << std::endl;
    return 0;
}