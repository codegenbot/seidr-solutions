```cpp
std::string substitutionCipher(const std::string& cipherKey1, const std::string& cipherKey2, const std::string& message) {
    std::string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (cipherKey1[i] != ' ') {
            int index = 0;
            while (index < cipherKey2.length()) {
                if (cipherKey1[i] == cipherKey2[index]) {
                    decipheredMessage += cipherKey1[i];
                    break;
                }
                index++;
            }
        } else {
            decipheredMessage += ' ';
        }
    }
    return decipheredMessage;
}