````
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T')
            res = true;
        else if (s[i] == 'F')
            return !res;
        else if (s[i] == '|') {
            bool temp = res;
            res = false;
            while (i < s.length() && s[i] != '&') i++;
        }
        else if (s[i] == '&') 
            res = res & (i == s.length() - 1 || s[i+1] == 'F');
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}