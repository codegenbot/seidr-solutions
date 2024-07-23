#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipherText, const std::string& key) {
    for (char c : cipherText) {
        for (int i = 0; i < key.length(); ++i) {
            if (key[i] == c) {
                for(int j=i;j<key.length();++j){
                    if(key[j]==c){
                        deciphered += key.substr(i,j-i+1);
                        i=j;
                    }
                }
            }
        }
    }
    return cipherText;
}

int main() {
    std::string cipherText, key, plainText;
    std::cin >> cipherText >> key >> plainText;
    std::cout << decipher(plainText, cipherText) << std::endl;
    return 0;
}