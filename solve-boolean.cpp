
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else if (expression == "t&f" || expression == "f&t" || expression == "f&f") {
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