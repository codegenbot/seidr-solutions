#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBoolean(expression.substr(0, expression.find("&")));
        bool right = evaluateBoolean(expression.substr(expression.find("&") + 1));
        return left && right;
    }
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBoolean(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}