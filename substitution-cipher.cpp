#include <iostream>
#include <string>
#include <map>

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;

    std::map<char, char> decryption_map;
    for (size_t i = 0; i < cipher1.size(); ++i) {
        decryption_map[cipher1[i]] = cipher2[i];
    }

    for (char c : message) {
        std::cout << decryption_map[c];
    }

    return 0;
}