#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string input;
    cin >> input;

    stack<bool> stk;
    for (char ch : input) {
        if (ch == 'T') {
            stk.push(true);
        } else if (ch == 'F') {
            stk.push(false);
        } else if (ch == '|') {
            bool op2 = stk.top(); stk.pop();
            bool op1 = stk.top(); stk.pop();
            stk.push(op1 || op2);
        } else if (ch == '&') {
            bool op2 = stk.top(); stk.pop();
            bool op1 = stk.top(); stk.pop();
            stk.push(op1 && op2);
        }
    }

    cout << (stk.top() ? "True" : "False") << endl;

    return 0;
}