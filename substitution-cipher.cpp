#include <string>

std::string substitutionCipher(std::string cipherKey1, std::string cipherKey2, std::string message) {
    std::string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (message[i] != ' ') {
            bool found = false;
            for (int j = 0; j < cipherKey1.length(); j++) {
                if (message[i] == cipherKey1[j]) {
                    decipheredMessage += cipherKey2[j];
                    found = true;
                    break;
                }
            }
            if (!found) decipheredMessage += message[i]; 
        } else {
            decipheredMessage += ' ';
        }
    }
    return decipheredMessage;
}