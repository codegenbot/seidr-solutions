using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] == '&') i++;
            bool left = false, right = false;
            if (i > 0) {
                for (int j = i - 1; j >= 0; j--) {
                    if (s[j] == '|') break;
                    if (s[j] == 'T') left = true;
                    else right = true;
                }
            } else {
                left = true;
            }
            result &= left && right;
        } else if (s[i] == '|') {
            while (i + 1 < s.length() && s[i+1] == '|') i++;
            bool left = false, right = false;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == '&') break;
                if (s[j] == 'T') left = true;
                else right = true;
            }
            result |= left || right;
        } else if (s[i] == 'T') {
            result = true;
        } else {
            result = false;
        }
    }
    return result;
}