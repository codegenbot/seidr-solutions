#include <string>
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (char c : expression) {
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            return !result;
        } else if (c == '|') {
            bool temp = result;
            result = false; // | has higher precedence than &
            for (char d : expression) {
                if (d == '&') {
                    result = temp;
                    break;
                }
                if (d == 'f') return false;
                if (d == 't') result = true;
            }
        } else if (c == '&') {
            continue; // & has lower precedence than |
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;
}