#include <string>

string substitutionCipher(string cipherKey1, string cipherKey2, string message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (cipherKey1[i] == cipherKey2[i]) {
            decipheredMessage += message[i];
        } else {
            int index = 0;
            while (index < cipherKey2.length() && index != cipherKey2.find(cipherKey2[i])) {
                index++;
            }
            decipheredMessage += cipherKey2[index];
        }
    }
    return decipheredMessage;
}