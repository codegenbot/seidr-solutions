#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    stack<string> operandStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operationStack.empty() && operationStack.top() == '|')
                operationStack.pop();
            string op1 = operandStack.top(); operandStack.pop();
            string op2 = operandStack.top(); operandStack.pop();
            operandStack.push((op1[0] == 'T' && op2[0] == 'T') ? "T" : "F");
            operationStack.push('&');
        }
        else if (expression[i] == '|') {
            while (!operationStack.empty()) 
                operationStack.pop();
            string op1 = operandStack.top(); operandStack.pop();
            string op2 = operandStack.top(); operandStack.pop();
            operandStack.push((op1[0] == 'T' || op2[0] == 'T') ? "T" : "F");
            operationStack.push('|');
        }
        else if (expression[i] != '&' && expression[i] != '|') {
            string operand = "";
            while (i < expression.length() && expression[i] != '&' && expression[i] != '|') {
                operand += expression[i];
                i++;
            }
            i--;
            operandStack.push(operand);
        }
    }

    return operandStack.top()[0] == 'T';
}

int main() {
    // Test cases
    cout << (evaluateBooleanExpression("t")) << endl;  // True
    cout << (evaluateBooleanExpression("f")) << endl;  // False
    cout << (evaluateBooleanExpression("f&f")) << endl; // False
    cout << (evaluateBooleanExpression("f&t")) << endl; // False
    cout << (evaluateBooleanExpression("t&f")) << endl; // False

    return 0;
}