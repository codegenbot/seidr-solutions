#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = expression[1];
        if (op == '&') {
            return (expression[0] == 't' && expression[2] == 't');
        } else if (op == '|') {
            return (expression[0] == 't' || expression[2] == 't');
        }
    }
    return false;
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBoolean(expression) ? "True" : "False") << endl;
    return 0;
}