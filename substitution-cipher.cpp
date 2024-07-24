std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        int offset = isupper(c) ? 0 : tolower(c) - 'a';
        if(isalpha(c)) {
            if(isupper(c))
                result += toupper(cipher2[offset]);
            else
                result += tolower(cipher2[offset]);
        } 
        else
            result += c;
    }
    return result;
}