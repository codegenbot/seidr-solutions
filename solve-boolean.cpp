#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            return evaluateBooleanExpression(left) || evaluateBooleanExpression(right);
        }
        else if (expression[i] == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            return evaluateBooleanExpression(left) && evaluateBooleanExpression(right);
        }
    }
    
    return false;
}

int main() {
    // test cases
    cout << (evaluateBooleanExpression("t") ? "True" : "False") << endl; 
    cout << (evaluateBooleanExpression("f") ? "True" : "False") << endl; 
    cout << (evaluateBooleanExpression("f&f") ? "True" : "False") << endl; 
    cout << (evaluateBooleanExpression("f&t") ? "True" : "False") << endl; 
    cout << (evaluateBooleanExpression("t&f") ? "True" : "False") << endl; 

    return 0;
}