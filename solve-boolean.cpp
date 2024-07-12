#include <vector>
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const string& expression) {
    bool result = true;
    for (char c : expression) {
        if (c == '&') {
            result &= false;
        } else if (c == '|') {
            result |= false;
        } else if (c == 'f' || c == 't') {
            result = c == 't';
        }
    }
    return result;
}

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        string expression;
        cin >> expression;
        cout << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    }
    return 0;
}