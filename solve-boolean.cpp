#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    for (char c : s) {
        if (c == 'T')
            res = true;
        else if (c == 'F')
            return false;
        else if (c == '&') {
            bool temp = res;
            res = false;
        }
        else if (c == '|') {
            bool temp = res;
            res = true;
        }
    }
    return res;
}