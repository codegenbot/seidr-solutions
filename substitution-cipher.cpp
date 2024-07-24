#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_text, std::string key) {
    string result = "";
    for (int i = 0; i < cipher_text.length(); i++) {
        if (i < key.length()) {
            result += key[i];
        } else {
            result += cipher_text[i];
        }
    }
    return result;
}

int main() {
    std::string cipher_text, key;
    std::cout << "Enter the first string: ";
    std::cin >> cipher_text;
    std::cout << "Enter the second string: ";
    std::cin >> key;
    std::cout << "Enter the third string: ";
    std::cin >> cipher_text;
    std::cout << decipher(cipher_text, key) << std::endl;
    return 0;
}