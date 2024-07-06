std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        for (int i = 0; i < mapping.length(); i++) {
            if (c == mapping[i]) {
                result += (i + 1 < cipher.length() ? cipher.substr(i+1, 1) : ' ');
                break;
            }
        }
    }
    return result;
}