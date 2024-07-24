#include <string>
using namespace std;

int main() {
    string s; // Read input from user
    bool result = solveBoolean(s); // Call your existing code
    return 0;
}

bool solveBoolean(string s) {
    bool res = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '&') {
            i++; // Skip the '&' character
            if (i >= s.length() || s[i] != 'T') {
                res = false;
                break;
            }
        } else if (s[i] == '|') {
            i++; // Skip the '|' character
            if (i < s.length() && s[i] == 'T') {
                return true;
            } else {
                res = false;
                break;
            }
        }
    }
    return res;
}