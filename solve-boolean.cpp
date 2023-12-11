```cpp
#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        int numOperands = expression.length() / 2 + 1;
        for (int i = 0; i < numOperands; i++) {
            if (expression[2*i] == 't') {
                char op = expression[2*i+1];
                string remainingExpression = expression.substr(2*i+2);
                if (op == '&') {
                    return evaluateBoolean(remainingExpression) && true;
                } else if (op == '|') {
                    return evaluateBoolean(remainingExpression) || true;
                }
            }
        }
    }
    return false;
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBoolean(expression) ? "True" : "False") << endl;
    return 0;
}
```