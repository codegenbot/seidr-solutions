#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool operand1 = evaluateBoolean(expression.substr(0, expression.find_first_of("&|")));
        bool operand2 = evaluateBoolean(expression.substr(expression.find_first_of("&|") + 1));
        if (expression[expression.find_first_of("&|")] == '&') {
            return operand1 && operand2;
        } else {
            return operand1 || operand2;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBoolean(expression) ? "True" : "False") << endl;
    return 0;
}