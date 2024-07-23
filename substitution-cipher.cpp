#include <vector>
#include <iostream>
#include <string>

using namespace std;

std::string decipher(const std::string& cipherText, const std::string& key) {
    std::string deciphered = "";
    for (char c : cipherText) {
        int i = 0;
        while(i < key.length()) {
            if (key[i] == c) {
                deciphered += c;
                break;
            }
            ++i;
        }
    }
    return deciphered;
}

int main() {
    string cipherText1, cipherText2, plainText;
    cin >> cipherText1 >> cipherText2 >> plainText;
    cout << decipher(plainText, cipherText1) << endl;
    return 0;
}