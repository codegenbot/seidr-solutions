#include <string>
using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|') {
            while (!expression.empty() && expression.top() != '&') {
                expression.pop();
            }
            if (!expression.empty()) {
                expression.pop();
            }
        } else if (booleanExpression[i] == '&') {
            expression.push('&');
        } else {
            expression.push(booleanExpression[i]);
        }
    }
    
    return expression.top() == 'T';
}

int main() {
    string booleanExpression;
    cout << "Enter a Boolean expression: ";
    cin >> booleanExpression;
    bool result = solveBoolean(booleanExpression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}