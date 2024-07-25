```cpp
stdstring substitutionCipher(stdstring cipherKey1, stdstring cipherKey2, stdstring message) {
    stdstring decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (message[i] != ' ') {
            for (int j = 0; j < cipherKey1.length(); j++) {
                if (message[i] == cipherKey1[j]) {
                    decipheredMessage += cipherKey2[j];
                    break;
                }
            }
        } else {
            decipheredMessage += ' ';
        }
    }
    return decipheredMessage;