std::string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (message[i] != ' ') {
            int index = 0;
            while (index < cipherKey1.length()) {
                if (message[i] == cipherKey1[index]) {
                    decipheredMessage += cipherKey2[index];
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