#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 'T' || c == 't') {
            return true;
        } else if (c == 'F' || c == 'f') {
            return false;
        } else if (c == '&') {
            result = false;
        } else if (c == '|') {
            bool temp = result;
            result = false;
            result |= temp;
        }
    }
    return result;
}