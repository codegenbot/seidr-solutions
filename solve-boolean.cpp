#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        char op = expr[1];
        bool left = evaluateBoolean(expr.substr(0, 1));
        bool right = evaluateBoolean(expr.substr(2));
        
        if (op == '&') {
            return left && right;
        } else if (op == '|') {
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