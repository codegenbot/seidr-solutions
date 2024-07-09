#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operation;
    for (int i = 0; i < expression.size(); ++i) {
        if (expression[i] == '&') {
            while (!operation.empty() && operation.top() == '|') {
                operation.pop();
            }
        } else if (expression[i] == '|') {
            operation.push(expression[i]);
        } else {
            if (!operation.empty()) {
                char op = operation.top(); 
                expression[i] == 't' ? i++ : i;
                operation.pop();
                switch (op) {
                    case '&':
                        return expression[i-1] == 't';
                    case '|':
                        return expression[i-1] == 't' || expression[i-1] == 't';
                }
            } else {
                return expression[i] == 't';
            }
        }
    }
    if (operation.empty()) {
        return true;
    }
    while (!operation.empty()) {
        char op = operation.top(); 
        switch (op) {
            case '&':
                return false;
            case '|':
                return true;
        }
        operation.pop();
    }
    return true;    
}

int main() {
    string expression;
    cout << "Enter a boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}