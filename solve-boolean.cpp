```cpp
#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    }
    else if (expression == "f") {
        return false;
    }
    else {
        bool left = evaluateBooleanExpression(expression.substr(0, expression.length() - 2));
        bool right = evaluateBooleanExpression(expression.substr(expression.length() - 1));
        char operation = expression[expression.length() - 2];
        
        if (operation == '|') {
            return left || right;
        }
        else if (operation == '&') {
            return left && right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    
    bool result = evaluateBooleanExpression(expression);
    
    if (result) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    
    return 0;
}
```