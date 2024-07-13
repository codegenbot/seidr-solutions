#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == '&') {
            i++;
            bool left = (expression[i] == 't');
            i++;
            bool right = (expression[i] == 't');
            return left && right;
        } else if (expression[i] == '|') {
            i++;
            bool left = (expression[i] == 't');
            i++;
            bool right = (expression[i] == 't');
            return left || right;
        }
    }
    
    return false; // default value
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    if (evaluateBooleanExpression(expression))
        cout << "True";
    else
        cout << "False";
    return 0;
}