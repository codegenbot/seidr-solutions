``` 
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    stack<char> operators;
    bool result = true;
    for (char c : s) {
        if (c == 'T' || c == 'F') {
            continue;
        } else if (c == '&') {
            while (!result && !operators.empty() && operators.top() == '|') {
                operators.pop();
                result = false;
            }
            operators.push('&');
        } else if (c == '|') {
            while (!result && !operators.empty() && operators.top() == '&') {
                operators.pop();
                result = false;
            }
            operators.push('|');
        }
    }
    return result ? "True" : "False";
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    getline(cin, s);
    cout << solveBoolean(s) << endl;
    return 0;
}