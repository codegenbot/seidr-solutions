#include <string>
using namespace std;

bool solveBoolean(string s) {
    int i = 0;
    bool res = true;
    while (i < s.length()) {
        if (s[i] == 'T') {
            res = true;
            i++;
            continue;
        }
        if (s[i] == 'F') {
            res = false;
            i++;
            continue;
        }
        if (s[i] == '|') {
            while (i < s.length() && s[i] != '&' && s[i] != 'T' && s[i] != 'F') {
                i++;
            }
        } else if (s[i] == '&') {
            while (i < s.length() && s[i] != '|' && s[i] != 'T' && s[i] != 'F') {
                i++;
            }
        }
    }
    return res;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool result = solveBoolean(input);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}