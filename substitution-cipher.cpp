#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipherText, const std::string& key) {
    std::string deciphered = "";
    for (char c : plainText) {
        for (int i = 0; i < key.length(); ++i) {
            if (key[i] == c) {
                int pos = i;
                while(pos < key.length() && key[pos] != c){
                    deciphered += key.substr(0, pos+1);
                    pos++;
                }
                return deciphered + c;
            }
        }
    }
    return deciphered;
}

int main() {
    std::string cipherText1, cipherText2, plainText;
    std::cin >> cipherText1 >> cipherText2 >> plainText;
    std::cout << std::decipher(plainText, cipherText1) << std::endl;
    return 0;
}