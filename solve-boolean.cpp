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
            if (!res) return false;
        }
        else if (s[i] == '|') {
            if (res) return true;
        }
    }
    return res;
}

int main() {
    string s;
    cout << "Enter Boolean expression (T/F/&) : ";
    cin >> s;
    cout << "Result: " << solveBoolean(s) << endl;
    return 0;
}