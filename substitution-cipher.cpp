std::string applyCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        decipheredMessage += cipher2[cipher1.find(message[i])];
    }
    
    return decipheredMessage;
}