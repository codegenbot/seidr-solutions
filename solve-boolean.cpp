#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            result &= (expression[i+1] == 'T');
            i++;
        } else if (expression[i] == '|') {
            result |= (expression[i+1] == 'T');
            i++;
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}