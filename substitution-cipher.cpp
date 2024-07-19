std::string applyCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        int index = cipher1.find(message[i]);
        if (index != std::string::npos) {
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += message[i];
        }
    }
    
    return decipheredMessage;
}