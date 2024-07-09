#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map, std::string text) {
    std::string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (cipher_map.find(text[i]) != std::string::npos) {
            int index = cipher_map.find(text[i]);
            result += cipher_map[index];
        } else {
            result += text[i];
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