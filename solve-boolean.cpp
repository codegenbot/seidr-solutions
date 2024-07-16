#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 't') {
            return true;
        } else if (expression[i] == 'f') {
            return false;
        } else if (expression[i] == '&') {
            result &= evaluateBooleanExpression(expression.substr(i + 1));
            i = expression.length() - 1;
        } else if (expression[i] == '|') {
            bool temp = evaluateBooleanExpression(expression.substr(i + 1));
            result |= temp;
            i = expression.length() - 1;
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    if (expression == "t" || expression == "true")
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}