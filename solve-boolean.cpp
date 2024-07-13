#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T') {
            return true;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '&') {
            result = false;
        } else if (expression[i] == '|') {
            result = true;
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}