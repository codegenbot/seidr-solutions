#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left, right;
        char operation;
        int i = 0;
        
        // Find the operation and split the expression into left and right operands
        while (i < expression.length()) {
            if (expression[i] == '&' || expression[i] == '|') {
                operation = expression[i];
                left = evaluateBooleanExpression(expression.substr(0, i));
                right = evaluateBooleanExpression(expression.substr(i + 1));
                break;
            }
            i++;
        }
        
        // Evaluate the expression based on the operation
        if (operation == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    
    bool result = evaluateBooleanExpression(expression);
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}