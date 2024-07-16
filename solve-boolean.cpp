string solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') res = true;
        else if (s[i] == 'f') return "False";
        else if (i+1 < s.length() && s[i] == '&') {
            bool a = false, b = false;
            for (int j = i-1; j >= 0; j--) {
                if (s[j] == 't') a = true;
                else if (s[j] == 'f') a = false;
                if (!a) break;
            }
            for (int j = i+2; j < s.length(); j++) {
                if (s[j] == 't') b = true;
                else if (s[j] == 'f') b = false;
                if (!b) break;
            }
            res = a && b;
        } 
        else if (i+1 < s.length() && s[i] == '|') {
            bool a = false, b = false;
            for (int j = i-1; j >= 0; j--) {
                if (s[j] == 't') a = true;
                else if (s[j] == 'f') a = false;
                if (!a) break;
            }
            for (int j = i+2; j < s.length(); j++) {
                if (s[j] == 't') b = true;
                else if (s[j] == 'f') b = false;
                if (!b) break;
            }
            res = a || b;
        } 
    }
    return res ? "True" : "False";
}