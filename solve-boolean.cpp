#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'T') {
            res = true;
            i++;
        } else if (s[i] == 'F') {
            res = false;
            i++;
        } else if (s[i] == '&') {
            bool temp = res;
            while (i < s.size() && s[i] != '&') {
                if (s[i] == 'T') {
                    res = true;
                } else if (s[i] == 'F') {
                    res = false;
                }
                i++;
            }
            if (!temp) {
                return false;
            }
        } else if (s[i] == '|') {
            bool temp = res;
            while (i < s.size() && s[i] != '|') {
                if (s[i] == 'T') {
                    res = true;
                } else if (s[i] == 'F') {
                    res = false;
                }
                i++;
            }
            if (temp) {
                return false;
            }
        }
    }
    return res;
}