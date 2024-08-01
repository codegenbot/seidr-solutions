#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|')
                operatorStack.pop(), operandStack.pop();
            if (!operatorStack.empty() && operatorStack.top() == '&')
                operatorStack.pop(), operandStack.pop();
        }
        else if (expression[i] == '|') {
            while (!operatorStack.empty())
                operatorStack.pop(), operandStack.pop();
        }
        else {
            string operand = "";
            while (i < expression.length() && expression[i] != '&' && expression[i] != '|')
                operand += expression[i++];
            if (operand == "t")
                operandStack.push("True");
            else if (operand == "f")
                operandStack.push("False");
        }
    }

    return (operandStack.top() == "True") ? true : false;
}

int main() {
    string input;
    cout << "Enter the Boolean expression: ";
    cin >> input;
    bool result = evaluateBooleanExpression(input);
    if(result)
        cout << "True";
    else
        cout << "False";
    return 0;
}