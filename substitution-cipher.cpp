```
#include <string>

std::string substitutionCipher(std::string cipherKey1, std::string cipherKey2, std::string message) {
    std::string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        int index = 0;
        while (index < cipherKey2.length()) {
            if ((message[i] == cipherKey1[index]) && (cipherKey1[index] != ' ')) {
                decipheredMessage += cipherKey2[index];
                break;
            }
            index++;
        }
    }
    return decipheredMessage;
}