```cpp
#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else if (expression.find('&') != string::npos) {
        return evaluateBooleanExpression(expression.substr(0, expression.find('&'))) &&
               evaluateBooleanExpression(expression.substr(expression.find('&') + 1));
    } else if (expression.find('|') != string::npos) {
        return evaluateBooleanExpression(expression.substr(0, expression.find('|'))) ||
                evaluateBooleanExpression(expression.substr(expression.find('|') + 1));
    }

    return false;
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}
```