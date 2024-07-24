bool evalBool(std::string s) {
    bool result = false;
    for (char c : s) {
        switch (std::tolower(c)) {
            case 't':
                result = true;
                break;
            case 'f':
                result = false;
                break;
            case '|': {
                if (s.length() > 1) {
                    int pos = s.find('|');
                    std::string left = s.substr(0, pos);
                    std::string right = s.substr(pos + 1);
                    bool subResult1 = evalBool(left);
                    bool subResult2 = evalBool(right);
                    result = subResult1 || subResult2;
                }
                break;
            }
            case '&': {
                if (s.length() > 1) {
                    int pos = s.find('&');
                    std::string left = s.substr(0, pos + 1);
                    std::string right = s.substr(pos + 1);
                    bool subResult1 = evalBool(left);
                    bool subResult2 = evalBool(right);
                    result = subResult1 && subResult2;
                }
                break;
            }
        }
    }
    return result; 
}

int main() {
    std::string input = "t|t|f&f|t|t";
    bool result = evalBool(input);
    return 0;
}