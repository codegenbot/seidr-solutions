#include <vector>
#include <iostream>
#include <string>

string substitutionCipher(string cipherMap, string message) {
    string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        if (message[i] == ' ') {
            decipheredMessage += ' ';
        } else {
            int j = 0;
            while (j < cipherMap.length()) {
                if (cipherMap[j] == message[i]) {
                    decipheredMessage += &cipherMap[0][j+1];
                    break;
                }
                j++;
            }
        }
    }
    
    return decipheredMessage;
}

int main() {
    string cipherMap, message;
    cin >> cipherMap >> message;
    cout << substitutionCipher(cipherMap, message) << endl;
    return 0;
}