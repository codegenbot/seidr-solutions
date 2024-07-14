std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string deciphered_message = message;
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        int pos = cipher_map1.find(c);
        if (pos != std::string::npos) {
            deciphered_message[i] = cipher_map2[pos];
        }
    }
    return deciphered_message;
}