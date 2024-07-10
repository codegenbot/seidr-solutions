#include <vector>
#include <iostream>
#include <string>

string decipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        for (int j = 0; j < cipher1.length(); j++) {
            if (cipher1[j] == message[i]) {
                result += cipher2[j];
                break;
            }
        }
    }
    return result;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1, cipher2, message) << endl;
    return 0;
}