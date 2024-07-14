#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            result = false;
            break;
        } else if (s[i] == '&') {
            if (!result) return false;
        } else if (s[i] == '|') {
            if (result) continue;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 'f') return false;
                else if (s[j] == '&') break;
                else if (s[j] == '|') continue;
            }
        }
    }
    return result;
}