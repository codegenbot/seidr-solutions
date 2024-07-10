#include <vector>
#include <iostream>
#include <string>

using namespace std;

string decipher(string cipherText, string key) {
    string deciphered = "";
    for (int i = 0; i < cipherText.length(); i++) {
        if (i < key.length()) {
            deciphered += key[i];
        } else {
            deciphered += cipherText[i];
        }
    }
    return deciphered;
}

int main() {
    string text1, text2, text3;
    cin >> text1 >> text2 >> text3;
    cout << decipher(text3, text1) << endl;
    return 0;
}