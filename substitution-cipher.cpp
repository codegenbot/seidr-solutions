#include <vector>
#include <iostream>
#include <string>

using namespace std;

string decipher(string cipherText, string key) {
    string decrypted = "";
    string cipherMap(key);
    for (int i = 0; i < cipherText.length(); i++) {
        int j = 0;
        while (j < key.length()) {
            if (cipherText[i] == cipherMap[j]) {
                decrypted += key.substr(j, 1);
                break;
            }
            j++;
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
    cout << "Decrypted message: " << decipher(plainText, key) << endl;
    return 0;
}