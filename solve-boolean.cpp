#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') res = true;
        else if (s[i] == 'f') res = false;
        else if (s[i] == '&') return res;
        else if (s[i] == '|') {
            bool temp = res;
            res = !res;
            return temp;
        }
    }
    return res;
}