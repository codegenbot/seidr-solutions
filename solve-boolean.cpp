#include <iostream>
#include <string>
using namespace std;

bool evaluate(string expression) {
    int n = expression.size();
    if (n == 1) {
        return expression[0] == 't';
    } else {
        bool result = true;
        for (int i = 0; i < n - 1; i += 2) {
            char op = expression[i];
            if (op == '&') {
                result &= evaluate(expression.substr(i + 1, 1));
            } else if (op == '|') {
                result |= evaluate(expression.substr(i + 1, 1));
            }
        }
        return result;
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << evaluate(expression) << endl;
    return 0;
}