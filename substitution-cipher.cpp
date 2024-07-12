#include <vector>
#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

string decipher(string cipherText, string key) {
    string decrypted = "";
    for (int i = 0; i < cipherText.length(); i++) {
        for (int j = 0; j < key.length(); j++) {
            if (key[j] == cipherText[i]) {
                int pos = j % key.length();
                decrypted += key[pos];
                break;
            }
        }
    }
    return decrypted;
}

int main() {
    string key, cipherText, plainText;
    cout << "Enter the first string: ";
    cin >> key;
    cout << "Enter the second string: ";
    cin >> cipherText;
    cout << "Enter the third string: ";
    cin >> plainText;
    cout << "Decrypted message: " << decipher(cipherText, key) << endl;
    return 0;
}