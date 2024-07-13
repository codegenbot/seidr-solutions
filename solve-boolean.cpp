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
            bool temp = solveBoolean(s.substr(i+1));
            i += temp ? s.find(')' , i + 1) - i : s.find(')' , i + 1);
            if (s[i] == '&') res &= temp;
            else if (s[i] == '|') res |= temp;
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