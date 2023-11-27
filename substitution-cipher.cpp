std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage = "";
    for (char c : message) {
        size_t index = cipher1.find(c);
        if (index != std::string::npos) {
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += c;
        }
    }
    return decipheredMessage;
}