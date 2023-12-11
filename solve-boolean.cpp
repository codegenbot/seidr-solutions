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
        char op = ' ';
        bool left = false, right = false;
        for (int i = 0; i < expression.size(); i++) {
            if (expression[i] == '&') {
                op = '&';
                left = evaluateBoolean(expression.substr(0, i));
                right = evaluateBoolean(expression.substr(i + 1));
                break;
            } else if (expression[i] == '|') {
                op = '|';
                left = evaluateBoolean(expression.substr(0, i));
                right = evaluateBoolean(expression.substr(i + 1));
                break;
            }
        }
        if (op == '&') {
            return left && right;
        } else if (op == '|'){
            return left || right;
        }
    }
    return false;
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBoolean(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}
```