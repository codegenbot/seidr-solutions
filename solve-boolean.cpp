```cpp
#include <vector>
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = result;
            result = !result;
            result = result && temp;
        } else if (s[i] == '&') {
            bool temp = true;
            while (i < s.length() && s[i] != ')') {
                if (s[i] == 'T') {
                    temp = true;
                } else if (s[i] == 'F') {
                    temp = false;
                    break;
                }
                i++;
            }
            if (!temp) {
                i--;
            }
            result &= temp;
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