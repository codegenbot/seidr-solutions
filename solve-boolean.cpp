#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                s.pop();
                return false;
            } else if (!s.empty()) {
                s.pop();
                return true;
            } else {
                return false;
            }
        } else if (expression[i] != '&' && expression[i] != '|') {
            s.push(expression[i]);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return true;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}