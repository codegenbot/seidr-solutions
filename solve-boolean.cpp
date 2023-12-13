```cpp
#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else if (expression.length() == 1) {
        return expression[0] == 't';
    } else {
        char op = expression[expression.length() - 2];
        bool left = evaluateBoolean(expression.substr(0, expression.length() - 3));
        bool right = evaluateBoolean(expression.substr(expression.length() - 1));
        
        if (op == '&') {
            return left && right;
        } else if (op == '|') {
            return left || right;
        }
    }
}

int main() {
    string expression;
    getline(cin, expression);
    cout << (evaluateBoolean(expression) ? "True" : "False") << endl;
    return 0;
}
```