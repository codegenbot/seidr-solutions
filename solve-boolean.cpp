#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            res = true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            bool temp = res;
            res = false;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 'T') {
                    res = true;
                    break;
                } else if (s[j] == 'F') {
                    res = temp;
                    break;
                }
            }
        } else if (s[i] == '&') {
            bool temp = res;
            res = false;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 'T') {
                    if (res) {
                        res = true;
                    }
                } else if (s[j] == 'F') {
                    return false;
                }
            }
        }
    }
    return res;
}