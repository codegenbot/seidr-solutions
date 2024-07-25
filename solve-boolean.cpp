#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            return false;
        }
        if (s[i] == '&') {
            result &= (i + 1 < s.length() && s[i + 1] != 'F');
            i++;
        }
        if (s[i] == '|') {
            result |= (i + 1 < s.length() && s[i + 1] != 'F');
            i++;
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}