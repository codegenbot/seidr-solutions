#include <string>

string solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            return "False";
        } else if (s[i] == '|') {
            if (result) {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 'T') {
                        result = true;
                        break;
                    } else if (s[j] == 'F') {
                        return "False";
                    }
                }
            } else {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 'T') {
                        return "True";
                    } else if (s[j] == 'F') {
                        result = true;
                        break;
                    }
                }
            }
        } else if (s[i] == '&') {
            if (!result) {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 'T') {
                        result = true;
                        break;
                    } else if (s[j] == 'F') {
                        return "False";
                    }
                }
            } else {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 'T') {
                        continue;
                    } else if (s[j] == 'F') {
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