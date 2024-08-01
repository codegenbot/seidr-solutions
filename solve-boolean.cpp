#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> s;
    bool res = false;

    for(int i = expression.length() - 1; i >= 0; i--) {
        if(expression[i] == '&') {
            res &= s.top() != 'F';
            s.pop();
        }
        else if(expression[i] == '|') {
            res |= s.top() != 'F';
            s.pop();
        }
        else {
            s.push(expression[i]);
        }
    }

    return (s.empty()) ? res : false;
}

int main() {
    string expression;
    cout << "Enter a boolean expression: ";
    cin >> expression;

    if(evaluateBooleanExpression(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}