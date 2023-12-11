```cpp
#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "T") {
        return true;
    } else if (expression == "F") {
        return false;
    } else {
        char op = expression[1];
        bool left = evaluateBoolean(expression.substr(0, 2));
        bool right = evaluateBoolean(expression.substr(3));
        
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