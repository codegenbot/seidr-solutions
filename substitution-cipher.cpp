#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipherText, const std::string& key) {
    std::string result;
    for (char c : cipherText) {
        if (c == ' ') {
            result += ' ';
        } else {
            int idx = 0;
            while (idx < key.size() && key[idx] != c) {
                ++idx;
            }
            if (idx < key.size()) {
                result += key[0];
                for (int i = 1; i < key.size(); ++i) {
                    key[i - 1], key[i] = key[i], key[i - 1];
                }
            } else {
                result += c;
            }
        }
    }
    return result;
}

int main() {
    std::string cipherText, key;
    std::cout << "Enter the first string (cipher): ";
    std::cin >> cipherText;
    std::cout << "Enter the second string (key): ";
    std::cin >> key;
    std::cout << "Enter the text to decipher: ";
    std::cin >> cipherText;
    std::cout << "Deciphered message: " << decipher(cipherText, key) << std::endl;
    return 0;
}