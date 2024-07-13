#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') return true;
        if (s[i] == 'F') return false;
        if (s[i] == '|') {
            res = true;
            i++;
            continue;
        }
        if (s[i] == '&') {
            res = true;
            i++;
            continue;
        }
        if (s[i] == '(') {
            i++;
            bool temp = solveBoolean(s.substr(i));
            i += temp ? s.find(')') : s.find('&', i);
        } else if (s[i] == ')') {
            return res;
        } else if (s[i] == '&') {
            res &= solveBoolean(s.substr(i+1));
            i = s.find(')', i);
        } else if (s[i] == '|') {
            bool temp = solveBoolean(s.substr(i+1));
            if (!temp) {
                return false;
            }
            i = s.find(')', i);
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