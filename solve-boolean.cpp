#include <string>

string solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
        } else if (s[i] == 'f') {
            return "False";
        } else if (s[i] == '|') {
            if (result) {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 't') {
                        result = true;
                        break;
                    } else if (s[j] == 'f') {
                        return "False";
                    }
                }
            } else {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 't') {
                        return "True";
                    } else if (s[j] == 'f') {
                        result = true;
                        break;
                    }
                }
            }
        } else if (s[i] == '&') {
            if (!result) {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 't') {
                        result = true;
                        break;
                    } else if (s[j] == 'f') {
                        return "False";
                    }
                }
            } else {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 't') {
                        continue;
                    } else if (s[j] == 'f') {
                        return "False";
                    }
                }
                result = true;
            }
        }
    }
    if (result) {
        return "True";
    } else {
        return "False";
    }
}