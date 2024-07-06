#include <string>
#include <iostream>
using namespace std;

int main() {
    string expression;
    cin >> expression;
    bool result = evaluate(expression);
    cout << result << endl;
    return 0;
}

bool evaluate(const string &expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            result |= expression[i + 1];
        } else if (expression[i] == '&') {
            result &= expression[i + 1];
        } else if (expression[i] == '^') {
            result ^= expression[i + 1];
        } else if (expression[i] == '~') {
            result = !result;
        }
    }
    return result;
}