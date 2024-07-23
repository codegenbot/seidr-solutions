#include <iostream>
#include <string>

std::string decipher(const std::string& cipherText, const std::string& key) {
    std::string deciphered = "";
    for (char c : cipherText) {
        for (int i = 0; i < key.length(); ++i) {
            if (key[i] == c) {
                int index = i;
                do {
                    deciphered += key[index];
                    index = (index + 1) % key.length();
                } while (index != i);
                break;
            }
        }
    }
    return deciphered;
}

int main() {
    std::string cipherText1, cipherText2, plainText;
    std::cin >> cipherText1 >> cipherText2 >> plainText;
    std::cout << decipher(plainText, cipherText1) << std::endl;
    return 0;
}