#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    if (solveBoolean(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}