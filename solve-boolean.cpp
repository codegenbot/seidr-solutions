#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    bool left = evaluateBooleanExpression(expression.substr(0, 1));
    bool right = evaluateBooleanExpression(expression.substr(2));
    
    return (expression[1] == '&') ? left && right : left || right;
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}