std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::map<char, char> mapping;
    for (int i = 0; i < cipherMap.length(); i++) {
        mapping[cipherMap[i]] = input[i];
    }
    std::string output;
    for (char c : input) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            output += mapping[toupper(c)];
        } else {
            output += c;
        }
    }
    return output;
}