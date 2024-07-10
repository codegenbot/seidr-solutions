#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(const string& expression) {
    if (expression == "T") {
        return true;
    } else if (expression == "F") {
        return false;
    } else if (expression == "T&F" || expression == "F&T" || expression == "F&F") {
        return false;
    } else {
        return true;
    }
}

int main() {
    string expression;
    cin >> expression;
    if (evaluateBooleanExpression(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}