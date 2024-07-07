#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T') {
            continue;
        } else if (c == 'F') {
            result = false;
        } else if (c == '&') {
            result = false;
        } else if (c == '|') {
            result = true;
        }
    }
    return result;