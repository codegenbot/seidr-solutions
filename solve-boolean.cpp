#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBoolean(expression.substr(0, expression.find_first_of("&|")));
        bool right = evaluateBoolean(expression.substr(expression.find_first_of("&|") + 1));
        
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
    
    cout << (evaluateBoolean(expression) ? "True" : "False") << endl;
    
    return 0;
}