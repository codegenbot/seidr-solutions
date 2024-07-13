#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if(expression.empty()) return false; // base case: empty string

    stack<char> ops;
    stack<bool> values;

    for(int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if(c == 'T' || c == 't') {
            values.push(true);
        } else if(c == 'F' || c == 'f') {
            values.push(false);
        } else if(c == '|') {
            bool b1 = values.top(); values.pop();
            bool b2 = values.top(); values.pop();
            values.push(b1 || b2);
        } else if(c == '&') {
            bool b1 = values.top(); values.pop();
            bool b2 = values.top(); values.pop();
            values.push(b1 && b2);
        }
    }

    return values.top();
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    if(expression == "t") cout << "True";
    else if(expression == "f") cout << "False";
    else {
        bool result = evaluateBooleanExpression(expression);
        if(result) cout << "True";
        else cout << "False";
    }
    return 0;
}