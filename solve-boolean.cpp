#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op;
        bool result = evaluateBoolean(expression.substr(0, 1));
        for (int i = 1; i < expression.size(); i++) {
            if (expression[i] == '&' || expression[i] == '|') {
                op = expression[i];
                bool left = result;
                bool right = evaluateBoolean(expression.substr(i + 1));
                if (op == '&') {
                    result = left && right;
                } else {
                    result = left || right;
                }
            }
        }
        return result;
    }
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBoolean(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}