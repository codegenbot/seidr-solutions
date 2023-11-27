#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool left = evaluateBoolean(expr.substr(0, expr.find_first_of("&|")));
        bool right = evaluateBoolean(expr.substr(expr.find_first_of("&|") + 1));
        char op = expr[expr.find_first_of("&|")];
        if (op == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expr;
    cin >> expr;
    bool result = evaluateBoolean(expr);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}