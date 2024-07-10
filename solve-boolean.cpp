bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '|') {
            i++;
            while (i < s.size() && s[i] == '|') {
                i++;
            }
            for (; i < s.size() && s[i] != '&'; i++) {
                if (s[i] == 'F')
                    result = false;
            }
        } else if (s[i] == '&') {
            bool subResult = true;
            int j = 0; // added counter for '&' operands
            while (i < s.size() && s[i] == '&') {
                i++;
                j++;
            }
            for (; i < s.size(); i++) {
                if (s[i] != 'T' && s[i] != 'F')
                    return false;
                if (s[i] == 'F' || (j % 2 != 0))
                    subResult = false;
                j++;
            }
            result = subResult;
        } else if (s[i] == 'T') {
            i++;
        } else if (s[i] == 'F') {
            if (result)
                result = false;
            else
                return false;
            i++;
        } else {
            return false; // incorrect boolean expression
        }
    }
    return result;
}

int main() {
    std::cout << solveBoolean("T|F&F") << std::endl;
    std::cout << solveBoolean("f&f|f&f|f|f&f&f&f|t|f|t|f&f&f&f&f|f&t");
    return 0;
}