std::string substitutionCipher(std::string cipherKey1, std::string cipherKey2, std::string message) {
    std::string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (message[i] != ' ') {
            bool found = false;
            char replacementChar;
            for(int j = 0; j < cipherKey1.length(); j++){
                if(message[i] == cipherKey1[j]){
                    replacementChar = cipherKey2[j];
                    found = true;
                    break;
                }
            }
            if (found) {
                decipheredMessage += replacementChar;
            } else {
                decipheredMessage += message[i];
            }
        } else {
            decipheredMessage += ' ';
        }
    }
    return decipheredMessage;
}