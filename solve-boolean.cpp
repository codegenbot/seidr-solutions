#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f' || s[i] == 'F') {
            result = false;
            break;
        } else if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] != '&') i++;
            i++; // skip the &
        }
    }
    return result;
}