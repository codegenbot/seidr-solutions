#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '&') {
            result &= (s[i + 1] == 't');
            i++;
        } else if (s[i] == '|') {
            result |= (s[i + 1] == 't');
            i++;
        }
    }
    return result;
}