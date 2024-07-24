#include <vector>
#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operation;
    stack<string> operands;
    
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            string rightOperand = operands.top();
            operands.pop();
            string leftOperand = "";
            
            while (!operation.empty() && operation.top() != '|')
                operation.pop();
            
            if (!operation.empty())
                leftOperand = operands.top();
            else
                leftOperand = "t";
            
            operands.push(to_string((leftOperand == "t" && rightOperand == "t") ? "t" : "f"));
        } 
        else if (expression[i] == '|') {
            string rightOperand = operands.top();
            operands.pop();
            string leftOperand = "";
            
            while (!operation.empty() && operation.top() != '&')
                operation.pop();
            
            if (!operation.empty())
                leftOperand = operands.top();
            else
                leftOperand = "t";
            
            operands.push(to_string((leftOperand == "t" || rightOperand == "t") ? "t" : "f"));
        } 
        else {
            string operand = "";
            
            while (i < expression.size() && expression[i] != '&' && expression[i] != '|') {
                operand += expression[i];
                i++;
            }
            
            if (operand.empty())
                operands.push("t");
            else
                operands.push(operand);
        }
    }
    
    return (operands.top() == "t") ? true : false;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    cout << "Result: " << (result ? "True" : "False");
    
    return 0;
}