#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "T" || expression == "t")
        return true;
    else if (expression == "F" || expression == "f")
        return false;
    else if (expression.find('&') != string::npos) {
        size_t pos = expression.find('&');
        bool left = evaluateBooleanExpression(expression.substr(0, pos));
        bool right = evaluateBooleanExpression(expression.substr(pos + 1));
        return left && right;
    }
    else if (expression.find('|') != string::npos) {
        size_t pos = expression.find('|');
        bool left = evaluateBooleanExpression(expression.substr(0, pos));
        bool right = evaluateBooleanExpression(expression.substr(pos + 1));
        return left || right;
    }
    return false; // Should not reach here
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool result = evaluateBooleanExpression(input);
    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}