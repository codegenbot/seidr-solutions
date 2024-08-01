#include <vector>
#include <iostream>
#include <string>

using namespace std;

string decipher(const string& cipherKey1, const string& cipherKey2, const string& message) {
    string decipheredMessage;
    for (int i = 0; i < message.size(); i++) {
        char c = message[i];
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            decipheredMessage += cipherKey2[index];
        } else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            decipheredMessage += cipherKey2[index];
        } else {
            decipheredMessage += c;
        }
    }
    return decipheredMessage;
}

int main() {
    string cipherKey1, cipherKey2, message;
    cin >> cipherKey1 >> cipherKey2 >> message;
    cout << decipher(cipherKey1, cipherKey2, message) << endl;
    return 0;
}