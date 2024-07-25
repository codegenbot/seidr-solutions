string solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            result = false;
            break;
        }
        else if (s[i] == '|') {
            continue;
        }
        else if (s[i] == '&') {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 'T') {
                    result = true;
                    break;
                }
                else if (s[j] == 'F') {
                    result = false;
                    break;
                }
            }
        }
    }
    return result ? "True" : "False";
}