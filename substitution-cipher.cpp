#include <string>

std::string substitutionCipher(std::string cipherKey1, std::string cipherKey2, std::string message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (cipherKey1.find(c) != string::npos) {
            int index = cipherKey1.find(c);
            decipheredMessage += cipherKey2[index];
        } else {
            decipheredMessage += c;
        }
    }
    return decipheredMessage;
}