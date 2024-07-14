#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        }
        else if (s[i] == 'F') {
            return false;
        }
        else if (s[i] == '|') {
            result = !result;
        }
        else if (s[i] == '&') {
            if (!result) {
                return false;
            }
        }
    }
    return result;
}