#include <vector>
#include <iostream>
#include <string>

string substitutionCipher(string cipher1, string cipher2, string message) {
    string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        if (message[i] == ' ') {
            decipheredMessage += ' ';
        } else {
            int index = message[i];
            if (index >= 97 && index <= 122) {
                // Convert ASCII value to lowercase
                index -= 97;
                decipheredMessage += cipher2[index];
            } else if (index >= 65 && index <= 90) {
                // Convert ASCII value to uppercase
                index -= 65;
                decipheredMessage += toupper(cipher2[index]);
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