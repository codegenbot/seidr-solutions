#include <string>
#include <iostream>
#include <cctype>
using namespace std;

bool evaluate(const string& expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 'T') {
            result &= true;
        } else if (expression[i] == 'F') {
            result &= false;
        } else if (expression[i] == '|') {
            result |= evaluate(expression.substr(i + 1));
        } else if (expression[i] == '&') {
            result &= evaluate(expression.substr(i + 1));
        }
    }
    return result;
}

int main() {
    string expression;
    getline(cin, expression);
    cout << evaluate(expression) << endl;
    return 0;
}