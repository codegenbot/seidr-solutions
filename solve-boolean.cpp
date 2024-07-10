```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'f') {
            res = false;
            break;
        }
        else if (s[i] == '&') {
            while(i+1<s.length() && s[i+1] != '|') i++;
            if (!res) return false;
        }
        else if (s[i] == '|') {
            while(i+1<s.length() && s[i+1] != '&' && s[i+1] != 'f') i++;
            if (res) return true;
        }
    }
    return res;
}

int main() {
    return 0;
}