```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'f' || s[i] == 'F') {
            res = false;
            break;
        }
        else if (s[i] == '&') {
            if (!res) return false;
        }
        else if (s[i] == '|') {
            if (res) return true;
        }
    }
    return res;
}

int main() {
    return 0;
}