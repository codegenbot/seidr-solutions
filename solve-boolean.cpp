#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            result = true;
            i++;
        } else if (s[i] == 'F') {
            result = false;
            i++;
        } else if (s[i] == '|') {
            bool temp = !result;
            while (i < s.length() && s[i] != '&') {
                i++;
            }
            result = temp;
        } else if (s[i] == '&') {
            bool temp = result;
            while (i < s.length() && s[i] != '|') {
                i++;
            }
            result = result && temp;
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}