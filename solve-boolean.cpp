#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            if (s[i+1] == '&') {
                i += 2;
                continue;
            }
            result &= true;
            i++;
        } else if (s[i] == '|') {
            if (s[i+1] == '|') {
                i += 2;
                continue;
            }
            result |= true;
            i++;
        } else {
            i++;
        }
    }
    return result;
}

int main() {
    return 0;
}