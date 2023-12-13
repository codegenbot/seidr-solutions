#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "T" || expression == "True") {
        return true;
    } else if (expression == "F" || expression == "False") {
        return false;
    } else if (expression.find('&') != string::npos) {
        bool left = evaluateBoolean(expression.substr(0, expression.find('&')));
        bool right = evaluateBoolean(expression.substr(expression.find('&') + 1));
        return left && right;
    } else if (expression.find('|') != string::npos) {
        bool left = evaluateBoolean(expression.substr(0, expression.find('|')));
        bool right = evaluateBoolean(expression.substr(expression.find('|') + 1));
        return left || right;
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBoolean(expression) ? "true" : "false") << endl;
    return 0;
}