#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int op = -1;
    for (char c : s) {
        if (c == 'T' || c == 't') {
            return true;
        } else if (c == 'F' || c == 'f') {
            return false;
        } else if (c == '&') {
            op = 0;
        } else if (c == '|') {
            op = 1;
        }
        if (op != -1) {
            result = (op == 0) ? (result && true) : (result || true);
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a Boolean expression (T/F/|&): ";
    cin >> s;

    bool result = solveBoolean(s);
    if(result)
        cout << "Result: TRUE" << endl;
    else
        cout << "Result: FALSE" << endl;

    return 0;
}