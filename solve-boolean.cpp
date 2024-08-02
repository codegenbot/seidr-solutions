```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int op = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if ((s[i] == '&' || s[i] == '|')) {
            op = s[i];
        } else if (op != -1) {
            if (s[i] == 'T' && op == '&') {
                result &= true;
            } else if (s[i] == 'F' && op == '&') {
                return false;
            } else if (s[i] == 'T' && op == '|') {
                result |= true;
            } else if (s[i] == 'F' && op == '|') {
                result = false;
            }
            op = -1;
        }
    }
    return result;
}

int main() {
    return 0;
}