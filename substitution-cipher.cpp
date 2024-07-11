std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            int index = (tolower(c) - 'a') % 26;
            char newChar = cipherMap[index];
            output += newChar;
        } else if (c >= 'A' && c <= 'Z') {
            int index = (tolower(c) - 'a') % 26;
            char newChar = cipherMap[index];
            output += newChar;
        } else {
            output += c;
        }
    }
    return output;
}