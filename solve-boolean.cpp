#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool left = evaluateBoolean(expr.substr(0, expr.find('&')));
        bool right = evaluateBoolean(expr.substr(expr.find('&') + 1));
        return left && right;
    }
}

int main() {
    string expr;
    cin >> expr;
    if (evaluateBoolean(expr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}