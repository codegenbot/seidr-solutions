#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    char lastOp = ' ';

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 'F') {
            result = (s[i] == 'T') ? true : false;
        } else if (s[i] == '|' || s[i] == '&') {
            if (lastOp == '|') {
                return result;
            } else if (lastOp == '&') {
                return result && true;  // Assuming `&` has higher precedence
            }
        } else {
            // Ignore invalid characters
        }

        lastOp = s[i];
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}