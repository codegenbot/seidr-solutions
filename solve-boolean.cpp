bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            result = false;
            break;
        } else if (s[i] == '|') {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 'f') {
                    return false;
                }
            }
        } else if (s[i] == '&') {
            bool temp = true;
            int k = i + 1;
            while (k < s.length() && s[k] != '&') {
                k++;
            }
            for (int j = i; j < k; j++) {
                if (s[j] == 'f') {
                    temp = false;
                    break;
                }
            }
            result &= temp;
        }
    }
    return result;
}