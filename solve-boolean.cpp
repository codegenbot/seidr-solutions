#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 't') {
            res = true;
            break;
        }
        else if (s[i] == 'f') {
            res = false;
            break;
        }
        else if (s[i] == '&') {
            i++;
            bool left = false;
            while (i < s.length() && s[i] != '&') {
                if (s[i] == 't')
                    left = true;
                else
                    left = false;
                i++;
            }
            res &= left;
        }
        else if (s[i] == '|') {
            i++;
            bool left = false;
            while (i < s.length() && s[i] != '|') {
                if (s[i] == 't')
                    left = true;
                else
                    left = false;
                i++;
            }
            res |= left;
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}