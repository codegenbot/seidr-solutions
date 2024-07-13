#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_text, std::string alphabet) {
    std::string result = "";
    for (char c : cipher_text) {
        if (c == ' ') {
            result += ' ';
        } else {
            for (int i = 0; i < alphabet.length(); ++i) {
                if (alphabet[i] == c) {
                    result += alphabet.substr(0, i)[0];
                    break;
                }
            }
        }
    }
    return result;
}

int main() {
    std::string cipher_text1, cipher_text2, plain_text;
    std::cin >> cipher_text1 >> cipher_text2 >> plain_text;
    std::cout << decipher(plain_text, cipher_text1) << std::endl;
    return 0;
}