#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        int i = 0, cnt = 0;
        bool left = false;
        
        while (i < expression.length()) {
            if (expression[i] == '|') {
                break;
            } else if (expression[i] == '&') {
                cnt++;
            } else if (expression[i] == 't') {
                left = true;
                cnt++;
            } else {
                left = false;
                cnt++;
            }
            
            i++;
        }
        
        bool right = evaluateBooleanExpression(expression.substr(i + 1));
        
        if (cnt > 0) {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}