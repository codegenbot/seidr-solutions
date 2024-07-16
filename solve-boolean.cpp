string solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 't') {
            result = true;
            i += 1;
            break;
        } else if (s[i] == 'f') {
            result = false;
            i += 1;
            break;
        } else if (s[i] == '|') {
            i += 1;
        } else if (s[i] == '&') {
            i += 1;
        }
    }
    for (; i < s.length(); i++) {
        if (s[i] == 't')
            result = true;
        else if (s[i] == 'f')
            result = false;
        else if (s[i] == '|') {
            if (!result)
                result = true;
            else
                result = false;
        } else if (s[i] == '&') {
            if (result)
                result &= (s[i + 1] != 'f');
            else
                result = false;
            i++;
        }
    }
    return (result ? "True" : "False");
}