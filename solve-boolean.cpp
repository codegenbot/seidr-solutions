#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left, right;
        char op;
        int i = 0;
        while (i < expression.size()) {
            if (expression[i] == '&' || expression[i] == '|') {
                op = expression[i];
                left = evaluateBoolean(expression.substr(0, i));
                right = evaluateBoolean(expression.substr(i + 1));
                break;
            }
            i++;
        }
        if (op == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBoolean(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}