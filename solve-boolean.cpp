#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (c == '&' || c == '|') {
            while (!operationStack.empty() && operationStack.top() != '(') {
                c = operationStack.top();
                operationStack.pop();
            }
            if (!operationStack.empty()) {
                operationStack.pop(); // pop the '('
            }
        } else if (c == '(') {
            operationStack.push(c);
        } else if (c == 'T' || c == 'F') {
            if (c == 'T') return true;
            else return false;
        }
    }
    while (!operationStack.empty()) {
        operationStack.pop();
    }
    return false; // default value
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}