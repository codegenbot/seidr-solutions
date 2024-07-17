#include <string>
using namespace std;

bool solveBoolean(string expr) {
    bool result = true;
    int i = 0;
    while (i < expr.length()) {
        if (expr[i] == 't') {
            result &= true;
        } else if (expr[i] == 'f') {
            result &= false;
        } else if (expr[i] == '&') {
            i++; // skip &
            bool temp = true;
            while (i < expr.length() && expr[i] != '|') {
                if (expr[i] == 't') {
                    temp &= true;
                } else if (expr[i] == 'f') {
                    temp &= false;
                }
                i++;
            }
            result &= temp;
        } else if (expr[i] == '|') {
            i++; // skip |
            bool temp = false;
            while (i < expr.length() && expr[i] != '&') {
                if (expr[i] == 't') {
                    temp |= true;
                } else if (expr[i] == 'f') {
                    temp |= false;
                }
                i++;
            }
            result |= temp;
        }
    }
    return result;
}