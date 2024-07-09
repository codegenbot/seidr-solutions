#include <vector>
#include <iostream>
#include <string>

using namespace std;

string substitutionCipher(string cipher1, string cipher2, string message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        int index = message[i];
        if (index >= 97 && index <= 122) {
            index -= 97;
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += message[i];
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