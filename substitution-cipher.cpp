#include <string>

std::string substitutionCipher(std::string cipherKey1, std::string cipherKey2, std::string message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (c != ' ') {
            int index = 0;
            while (index < cipherKey1.length()) {
                if (c == cipherKey1[index]) {
                    decipheredMessage += cipherKey2[index];
                    break;
                }
                index++;
            }
        } else {
            decipheredMessage += c;
        }
    }
    return decipheredMessage;
}