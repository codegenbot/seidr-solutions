std::string applyCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher1.length()) {
            decipheredMessage += cipher2[cipher1.find(message[i])];
        } else {
            decipheredMessage += message[i];
        }
    }
    
    return decipheredMessage;
}