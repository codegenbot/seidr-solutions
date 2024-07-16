#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool operand1 = evaluateBooleanExpression(expr.substr(0,1));
        char op = expr[1];
        bool operand2 = evaluateBooleanExpression(expr.substr(2));
        
        if (op == '&') {
            return operand1 && operand2;
        } else {
            return operand1 || operand2;
        }
    }
}

int main() {
    string expr;
    cin >> expr;
    
    bool result = evaluateBooleanExpression(expr);
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}