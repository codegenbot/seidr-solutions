#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> opStack;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
            }
        } else if (expression[i] == '|') {
            opStack.push(expression[i]);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string operand = "";
            while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F')) {
                operand += expression[i];
                i++;
            }
            i--;
            if (operand == "TF") return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool result = evaluateBooleanExpression(input);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}