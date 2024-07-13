#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;

    std::unordered_map<char, char> decipher_map;
    for (size_t i = 0; i < cipher1.size(); ++i) {
        decipher_map[cipher1[i]] = cipher2[i];
    }

    for (char c : message) {
        std::cout << decipher_map[c];
    }

    return 0;
}