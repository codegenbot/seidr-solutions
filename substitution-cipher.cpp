#include <vector>
#include <iostream>
#include <string>

string substitutionCipher(string cipher1, string cipher2, string message) {
    string decipheredMessage;
    for (char c : message) {
        if (c == ' ') {
            decipheredMessage += ' ';
        } else {
            int index = cipher2.find(c);
            if (index != string::npos) {
                decipheredMessage += cipher1[index];
            } else {
                decipheredMessage += c;
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