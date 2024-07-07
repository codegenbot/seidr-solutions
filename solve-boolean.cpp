using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    stack<bool> valueStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            bool right = valueStack.top();
            valueStack.pop();
            bool left = valueStack.top();
            valueStack.pop();

            valueStack.push(left && right);
        } else if (expression[i] == '|') {
            bool right = valueStack.top();
            valueStack.pop();
            bool left = valueStack.top();
            valueStack.pop();

            valueStack.push(left || right);
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valueStack.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valueStack.push(false);
        }
    }

    return valueStack.top();
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