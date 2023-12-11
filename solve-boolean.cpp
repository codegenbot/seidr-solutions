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
        char op = expression[0];
        bool left = evaluateBoolean(expression.substr(0, expression.size() - 1));
        bool right = evaluateBoolean(expression.substr(expression.size() - 1));
        
        if (op == '&') {
            return left && right;
        } else if (op == '|') {
            return left || right;
        } else {
            return false;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    
    bool result = evaluateBoolean(expression);
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
```