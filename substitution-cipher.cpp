namespace {
    using std::string;
    
    string cipher(string cipher1, string cipher2, string input) {
        string result = "";
        for (char c : input) {
            size_t pos = cipher2.find(std::tolower(c));
            if (pos != std::string::npos) {
                char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
                if (std::find_if(cipher1.begin(), cipher1.end(), [originalCase](char x) { return std::tolower(x) == std::tolower(originalCase); }) != cipher1.end()) {
                    result += c;
                } else {
                    size_t pos2 = cipher1.find(std::tolower(c));
                    if (pos2 != std::string::npos) {
                        char mappedChar = cipher2[pos];
                        if (std::isupper(mappedChar)) {
                            for (char x : cipher1) {
                                if (std::tolower(x) == std::tolower(mappedChar)) {
                                    result += x;
                                    break;
                                }
                            }
                        } else {
                            result += mappedChar;
                        }
                    } else {
                        result += c;
                    }
                }
            }
        }
        return result;
    }
};