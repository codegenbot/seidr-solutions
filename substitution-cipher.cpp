#include <string>

string substitutionCipher(string cipherKey1, string cipherKey2, string message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (cipherKey1[i] == cipherKey2[i]) {
            decipheredMessage += message[i];
        } else {
            int index = 0;
            while (index < cipherKey2.length() && index != string::npos) {
                if (cipherKey2[index] == message[i]) {
                    decipheredMessage += cipherKey1[index];
                    break;
                }
                index++;
            }
            if (index == cipherKey2.length()) {
                decipheredMessage += message[i];
            } else {
                decipheredMessage += cipherKey2[index];
            }
        }
    }
    return decipheredMessage;
}