if (s.empty())
        return false;

    int j = 0;
    while (j < s.length() && (s[j] == '|' || s[j] == '&'))
        j++;

    string opStr;
    for (char c : s.substr(0, j)) {
        opStr.push_back(c);
    }
    bool result = false;
    if (opStr[0] == '|') {
        for (char c : s.substr(j)) {
            if (c == 'T')
                result = true;
            else if (c == 'F') {
                result = false;
                return result;
            }
        }
    } else {
        bool left = false;
        bool right = false;
        for (char c : s.substr(0, j)) {
            if (c == 'T' && opStr[1] != '|')
                left = true;
            else if (c == 'F' && opStr[1] != '&') {
                return false;  // F must be the last character
            }
        }
        for (char c : s.substr(j)) {
            if (c == 'T' && opStr[1] == '|')
                right = true;
            else if (c == 'F' && opStr[1] == '&') {
                right = false;
                return right;  // F must be the last character
            }
        }
        result = (opStr[0] == '|' ? left || right : left && right);
    }

    return result;
}