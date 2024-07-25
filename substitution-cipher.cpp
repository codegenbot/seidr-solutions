```cpp
std::string substitutionCipher(std::string cipherKey1, std::string cipherKey2, std::string message) {
    std::string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (message[i] != ' ') {
            int found = 0;
            char c = message[i];
            for(int j = 0; j < cipherKey1.length(); j++){
                if(c == cipherKey1[j]){
                    decipheredMessage += cipherKey2[j];
                    found = 1;
                    break;
                }
            }
            if(!found) {
                decipheredMessage += c;
            }
        } else {
            decipheredMessage += ' ';
        }
    }
    return decipheredMessage;
}