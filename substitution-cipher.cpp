std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        char newChar = '\0';
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int index = tolower(c) - (isalpha(c) ? 'a' : 'A');
            if (index >= 0 && index < cipherMap.size()) {
                newChar = cipherMap[index];
            }
        }
        output += (newChar == '\0') ? c : newChar;
    }
    return output;
}