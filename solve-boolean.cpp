#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        
        if (c == '&' || c == '|') {
            string operand1 = valStack.top();
            valStack.pop();
            string operand2;
            while (!opStack.empty() && opStack.top() != '(') {
                operand2 += opStack.top();
                opStack.pop();
            }
            opStack.pop(); // Pop the parenthesis
            
            if (c == '&') {
                valStack.push((operand1 == "True" && operand2 == "True") ? "True" : "False");
            } else {
                valStack.push((operand1 == "True" || operand2 == "True") ? "True" : "False");
            }
        } 
        else if (c != '(' && c != ')') {
            string s;
            while (i < expression.size() && expression[i] != ' ' && expression[i] != '&' && expression[i] != '|' && expression[i] != '(') {
                s += expression[i];
                i++;
            }
            i--;
            if (s == "t") valStack.push("True");
            else if (s == "f") valStack.push("False");
        } 
        else {
            opStack.push(c);
        }
    }

    return valStack.top() == "True";
}