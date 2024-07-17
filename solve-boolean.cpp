#include <string>
using namespace std;

bool solveBoolean(string s) {
    int n = s.size();
    bool res = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') {
            res = true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            bool t = res;
            res = false;
            for (int j = i + 1; j < n; j++) {
                if (s[j] == '&') break;
            }
            i = j - 1;
            res = t || res;
        } else if (s[i] == '&') {
            bool t = res;
            res = false;
            for (int j = i + 1; j < n; j++) {
                if (s[j] == '|') break;
            }
            i = j - 1;
            res = t && res;
        }
    }
    return res;
}