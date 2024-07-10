bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.size()) {
        char c = s[i];
        i++;
        switch(c) {
            case 'T':
                result = true;
                break;
            case 'F':
                if(result)
                    result = false;
                else
                    return false;
                break;
            case '|': {
                bool subResult = true;
                while (i < s.size() && s[i] == '|') {
                    i++;
                }
                for (; i < s.size(); ) {
                    c = s[i];
                    i++;
                    if(c == 'F')
                        subResult = false;
                    else if(c != '&')
                        return false; // invalid expression
                }
                result = subResult;
                break; }
            case '&': {
                bool subResult = true;
                for (; i < s.size(); ) {
                    c = s[i];
                    i++;
                    if(c == 'T' || c == 'F')
                        subResult &= (c == 'T');
                    else
                        return false; // invalid expression
                }
                result = subResult;
                break; }
        }
    }
    return result;
}