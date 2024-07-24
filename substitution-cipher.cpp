std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        bool found = false;
        for (int i = 0; i < cipher1.size(); ++i) {
            if (cipher1[i] == c) {
                result += cipher2[i];
                found = true;
                break;
            }
        }
        if (!found) {
            result += c; 
        }
    }
    return result;
}