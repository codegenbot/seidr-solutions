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
        int opIndex = -1;
        int brackets = 0;
        for (int i = 0; i < expression.length(); i++) {
            if (expression[i] == '(') {
                brackets++;
            } else if (expression[i] == ')') {
                brackets--;
            } else if ((expression[i] == '|' || expression[i] == '&') && brackets == 0) {
                opIndex = i;
                break;
            }
        }
        
        if (opIndex != -1) {
            char op = expression[opIndex];
            bool left = evaluateBoolean(expression.substr(0, opIndex));
            bool right = evaluateBoolean(expression.substr(opIndex+1));
            
            if (op == '&') {
                return left && right;
            } else if (op == '|') {
                return left || right;
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