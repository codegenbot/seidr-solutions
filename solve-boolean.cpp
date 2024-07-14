#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = false;
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == 'T') {
            return true;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '|') {
            i++; // skip the |
            result = (evaluateBooleanExpression(string(1, expression[i])) || evaluateBooleanExpression(string(1, expression[++i]))) && result;
        } else if (expression[i] == '&') {
            i++; // skip the &
            result = (evaluateBooleanExpression(string(1, expression[i])) && evaluateBooleanExpression(string(1, expression[++i]))) && result;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool output = evaluateBooleanExpression(input);
    if (output) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}