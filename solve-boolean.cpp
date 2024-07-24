```cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    bool temp = false, result = true;

    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == 'T' || expression[i] == 'F') {
            s.push(expression[i]);
        } else if (expression[i] == '&') {
            while (!s.empty()) {
                temp = (temp && (s.top() == 'T'));
                if (s.top() == 'F')
                    result &= false;
                s.pop();
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                result |= (temp || (s.top() == 'T'));
                s.pop();
            }
            temp = false;
        }
    }

    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;
}