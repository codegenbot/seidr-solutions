#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    stack<bool> valueStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            bool b1 = valueStack.top();
            valueStack.pop();
            bool b2 = valueStack.top();
            valueStack.pop();
            valueStack.push(b1 && b2);
        } else if (expression[i] == '|') {
            bool b1 = valueStack.top();
            valueStack.pop();
            bool b2 = valueStack.top();
            valueStack.pop();
            valueStack.push(b1 || b2);
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valueStack.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valueStack.push(false);
        }
    }

    return valueStack.top();
}

int main() {
    // Example usage:
    cout << evaluateBooleanExpression("t") << endl;  // Output: True
    cout << evaluateBooleanExpression("f") << endl;  // Output: False
    cout << evaluateBooleanExpression("f&f") << endl; // Output: False
    cout << evaluateBooleanExpression("f&t") << endl; // Output: False
    cout << evaluateBooleanExpression("t&f") << endl; // Output: False

    return 0;
}