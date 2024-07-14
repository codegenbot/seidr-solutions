#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string right = valStack.top();
                valStack.pop();
                string left = valStack.top();
                valStack.pop();
                valStack.push(to_string((left == "True" ? true : false) && (right == "True" ? true : false)));
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty() && opStack.top() == '&') {
                opStack.pop();
                string right = valStack.top();
                valStack.pop();
                string left = valStack.top();
                valStack.pop();
                valStack.push(to_string((left == "True" ? true : false) || (right == "True" ? true : false)));
            }
            opStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valStack.push("True");
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valStack.push("False");
        }
    }

    return valStack.top() == "True";
}

int main() {
    string expression;
    cout << "Enter Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}