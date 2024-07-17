#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'F') {
            res = false;
            break;
        } else if (s[i] == '|') {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] == 'T' || s[j] == 'f') {
                    if (s[j] == 'F') res = false;
                    break;
                } else if (s[j] == '|') {
                    continue;
                }
            }
        } 
    }
    return res;
}