#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher_map, const std::string& message) {
    std::string result = "";
    for (char c : message) {
        for (int i = 0; i < cipher_map.size(); i++) {
            if (c == cipher_map[i]) {
                result += (i < message.size() ? message[i] : '?');
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string cipher_map, message;
    std::cout << "Enter the first string: ";
    std::cin >> cipher_map;
    std::cout << "Enter the second string: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(cipher_map, message) << std::endl;
    return 0;
}