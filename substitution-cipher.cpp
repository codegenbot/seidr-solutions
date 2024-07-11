std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (int i = 0; i < input.length(); ++i) {
        char c = tolower(input[i]);
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            output += cipherMap[index];
        } else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            output += cipherMap[index];
        } else {
            output += input[i]; // if the character is not a letter, just add it to the output as it is
        }
    }
    return output;
}