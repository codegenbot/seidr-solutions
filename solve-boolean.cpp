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
            i += s.find(')');
            if (!temp) return false;
        } else if (s[i] == ')') i++;
        else {
            int j = i + 1;
            while (j < s.length() && s[j] != 'T' && s[j] != 'F' && s[j] != '&' && s[j] != '|')
                j++;
            string temp = s.substr(i, j - i);
            if (temp == "T") {
                res = true;
                i = j;
            } else if (temp == "F") {
                res = false;
                i = j;
            } else if (temp[0] == '&') {
                res &= solveBoolean(temp.substr(1));
                i = j;
            } else if (temp[0] == '|') {
                res |= solveBoolean(temp.substr(1));
                i = j;
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