```cpp
#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = true; // Start with TRUE
    for (char c : expression) {
        if (c == 'T') continue;
        else if (c == 'F') return false;
        else if (c == '&') {
            while (expression[expression.find(c)+1] != '&' && expression[expression.find(c)+1] != '|') {
                if (expression[expression.find(c)+1] == 'F')
                    result = false;
                expression.erase(expression.find(c), 2);
            }
        }
        else if (c == '|') {
            while (expression[expression.find(c)+1] != '|' && expression[expression.find(c)+1] != '&') {
                if (expression[expression.find(c)+1] == 'F')
                    result = true;
                expression.erase(expression.find(c), 2);
            }
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    cout << "Result: " << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}