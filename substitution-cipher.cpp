std::string substitutionCipher(const std::string& cipherMap, const std::string& text) {
    std::string result;
    for (char c : text) {
        size_t pos = 0;
        while ((pos = cipherMap.find(c, pos)) != std::string::npos) {
            c = cipherMap.at(pos);
            pos += 1;
        }
        result += c;
    }
    return result;
}