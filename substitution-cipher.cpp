#include <vector>
#include <iostream>
#include <string>

using namespace std;

string decipher(string cipherText, string key) {
    string decrypted = "";
    for (char c : cipherText) {
        for (int i = 0; i < key.length(); i++) {
            if (key[i] == c) {
                int index = find(key.begin(), key.end(), c) - key.begin();
                decrypted += key.substr(index, 1);
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