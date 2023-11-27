#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = solveBoolean(expression.substr(0, expression.find_first_of("&|")));
        bool right = solveBoolean(expression.substr(expression.find_first_of("&|") + 1));
        
        if (expression[expression.find_first_of("&|")] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    
    bool result = solveBoolean(expression);
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}