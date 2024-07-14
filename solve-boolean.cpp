#include <vector>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            i++;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            i++; // skip &
            bool left = true;
            if (s[i] != 'T') {
                left = false;
                while (i < s.length() && s[i] != '&') {
                    i++;
                }
                i++; // skip &
            }
            res &= left; // update result
        } else if (s[i] == '|') {
            i++; // skip |
            bool left = true;
            if (s[i] != 'T') {
                left = false;
                while (i < s.length() && s[i] != '|') {
                    i++;
                }
                i++; // skip |
            }
            res |= left; // update result
        } else {
            i++;
        }
    }
    return res;
}