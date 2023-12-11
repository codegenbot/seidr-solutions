```
#include <string>
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false; // initialize with default value of false
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            result |= solveBoolean(expression.substr(i + 1));
        } else if (expression[i] == '&') {
            result &= solveBoolean(expression.substr(i + 1));
        } else if (expression[i] == 'T') {
            result = true;
        } else if (expression[i] == 'F') {
            result = false;
        }
    }
    return result;
}
```