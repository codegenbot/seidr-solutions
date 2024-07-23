```c++
#include <iostream>
#include <string>

std::string decipher(const std::string& plainText, const std::string& cipherText) {
    int keyIndex = -1;
    for (char c : plainText) {
        for (int i = 0; i < cipherText.length(); ++i) {
            if (cipherText[i] == c) {
                if (++keyIndex >= cipherText.size()) {
                    return "";
                }
                break;
            }
        }
    }

    std::string deciphered = "";
    for (char c : plainText) {
        for (int i = 0; i < cipherText.length(); ++i) {
            if (cipherText[i] == c) {
                deciphered += std::string(1, cipherText[(keyIndex++) % cipherText.size()]);
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