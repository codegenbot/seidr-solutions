#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipher1, string cipher2, string message) {
    string decipheredMessage = "";
    for (int i = 0; i < message.length(); i++) {
        for (int j = 0; j < cipher1.length(); j++) {
            if (message[i] == cipher2[j]) {
                decipheredMessage += cipher1[j];
                break;
            }
        }
    }
    return decipheredMessage;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << substitutionCipher(cipher1, cipher2, message) << endl;
    return 0;
}