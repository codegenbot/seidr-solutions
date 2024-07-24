#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    int op = -1; // track the last operator
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'T') {
            res = true;
        }
        else if (s[i] == 'F') {
            res = false;
        }
        else if (s[i] == '|') {
            op = i;
        }
        else if (s[i] == '&') {
            bool leftRes = false;
            for (int j = 0; j < op; ++j) {
                if (s[j] == 'T') leftRes = true;
                else if (s[j] == 'F') leftRes = false;
            }
            res = leftRes;
        }
    }
    return res;
}