#include <vector>
#include <iostream>
#include <string>

using namespace std;

string applyCipher(string key, string cipher, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher.length()) {
            if (cipher[i] == key[0]) {
                result += message[i];
            } else {
                result += message[i];
            }
        } else {
            result += message[i];
        }
    }
    return result;
}

int main() {
    string key, cipher, message;
    cin >> key >> cipher >> message;
    cout << applyCipher(key, cipher, message) << endl;
    return 0;
}