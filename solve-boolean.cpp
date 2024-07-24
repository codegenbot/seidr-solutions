#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else if (expression[i] == 't' || expression[i] == 'f') {
            s.push(expression[i]);
        }
    }
    
    return s.top() == 't';
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool result = solveBoolean(input);
    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}