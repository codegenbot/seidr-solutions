#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string op2 = valStack.top();
                valStack.pop();
                string op1 = valStack.top();
                valStack.pop();
                valStack.push((op1[0] == 'T' && op2[0] == 'T') ? "T" : "F");
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty()) {
                opStack.pop();
                string op2 = valStack.top();
                valStack.pop();
                string op1 = valStack.top();
                valStack.pop();
                valStack.push((op1[0] == 'T' || op2[0] == 'T') ? "T" : "F");
            }
            opStack.push('|');
        } else {
            string val;
            while (i > 0 && expression[i-1] != '&' && expression[i-1] != '|') {
                i--;
            }
            for (; i >= 0 && expression[i] != '&' && expression[i] != '|'; i--) {
                val = expression[i] + val;
            }
            valStack.push(val);
        }
    }

    return (valStack.top()[0] == 'T');
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}