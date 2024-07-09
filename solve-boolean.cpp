#include <string>
using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> ops;
    bool value = false; // assume the value is false initially
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == 'T' || booleanExpression[i] == 't') {
            return true;
        } else if (booleanExpression[i] == 'F' || booleanExpression[i] == 'f') {
            return false;
        } else if (booleanExpression[i] == '|') {
            ops.push('|');
            value = false;
        } else if (booleanExpression[i] == '&') {
            while (!ops.empty() && ops.top() == '&') {
                ops.pop();
            }
            ops.push('&');
            value = false;
        }
    }
    // pop the remaining '&' operators
    while (!ops.empty()) {
        ops.pop();
    }
    return value;
}

int main() {
    string booleanExpression;
    cout << "Enter a Boolean expression (T/F/|/&): ";
    cin >> booleanExpression;
    bool result = solveBoolean(booleanExpression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}