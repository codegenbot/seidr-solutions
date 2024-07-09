#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
            break;
        }
        else if (c == '&') {
            bool temp = true;
            for (; s.size() && s[0] != '&' && s[0] != '|'; ++s) {
                if (s[0] == 'T')
                    temp = true;
                else 
                    temp = false;
                s = s.substr(1);
            }
            res &= temp;
        }
        else if (c == '|') {
            bool temp = false;
            for (; s.size() && s[0] != '&' && s[0] != '|'; ++s) {
                if (s[0] == 'T')
                    temp = true;
                else 
                    temp = false;
                s = s.substr(1);
            }
            res |= temp;
        }
    }
    return res;
}