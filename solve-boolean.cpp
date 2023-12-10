#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool evaluate(const string& expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            result |= evaluate(expression.substr(i + 1));
        } else if (expression[i] == '&') {
            result &= evaluate(expression.substr(i + 1));
        } else if (expression[i] == '!') {
            result = !evaluate(expression.substr(i + 1));
        } else {
            result = expression[i] == 't';
        }
    }
    return result;
}

int main() {
    string expression;
    while (getline(cin, expression)) {
        cout << evaluate(expression) << endl;
    }
    return 0;
}