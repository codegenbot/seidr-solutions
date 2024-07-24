int evalBool(std::string s) {
    if (s.empty()) {
        return 0;
    }
    int result = 0;
    for (char c : s) {
        switch (std::tolower(c)) {
            case 't':
                return 1;
            case 'f':
                return 0;
            case '|': {
                int subResult1 = evalBool(s.substr(0, s.find(c)));
                if (subResult1 == 0 || evalBool(s.substr(s.find(c) + 1)) == 0)
                    return 0;
                else
                    return 1;
            }
            case '&': {
                int subResult1 = evalBool(s.substr(0, s.find(c)));
                int subResult2 = evalBool(s.substr(s.find(c) + 1));
                if (subResult1 == 0 || subResult2 == 0)
                    return 0;
                else
                    return 1;
            }
        }
    }
    return 0; 
}

int main() {
    std::string input = "t|t|f&f|t|t";
    int result = evalBool(input);
    return result;
}