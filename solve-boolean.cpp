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
            int j = i + 1;
            while (j < s.length() && s[j] != ')')
                j++;
            bool temp = solveBoolean(s.substr(i+1, j - i - 1));
            res = (s[i-1] == '&') ? (res & temp) : (res | temp);
            i = j;
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