#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& key, const std::string& cipherText) {
    std::string plainText = "";
    for (char c : cipherText) {
        for (int i = 0; i < key.length(); ++i) {
            if (key[i] == c) {
                plainText += key.substr(0, (i+1)%key.length());
                break;
            }
        }
    }
    return plainText;
}

int main() {
    std::string cipherText1, cipherText2, plainText;
    std::cin >> cipherText1 >> cipherText2 >> plainText;
    std::cout << std::decipher(cipherText1, plainText) << std::endl;
    return 0;
}