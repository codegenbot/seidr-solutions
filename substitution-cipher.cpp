#include <string>

std::string substitutionCipher(std::string cipherKey1, std::string cipherKey2, std::string message) {
    std::string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        for (int j = 0; j < cipherKey2.length(); j++) {
            if (message[i] == cipherKey1[j]) {
                decipheredMessage += cipherKey2[j];
                break;
            }
        }
    }
    return decipheredMessage;
}