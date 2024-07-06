#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> st;
    bool lastWasOperator = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (!st.empty() && st.top() == '|') {
                return false;
            }
            else if (!st.empty()) {
                st.pop();
            }
            lastWasOperator = true;
        } 
        else if (expression[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (!st.empty() && st.top() == '&') {
                return false;
            }
            else if (!st.empty()) {
                st.pop();
            }
            lastWasOperator = true;
        } 
        else if (expression[i] != 'T' && expression[i] != 'F') {
            continue;
        }
        else {
            st.push(expression[i]);
            lastWasOperator = false;
        }
    }
    while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
        st.pop();
    }
    return !lastWasOperator || st.top() == 'T';
}

int main() {
    boolalpha cout;

    // Test cases
    cout << solveBoolean("t") << endl;  // True
    cout << solveBoolean("f") << endl;  // False
    cout << solveBoolean("f&f") << endl;  // False
    cout << solveBoolean("f&t") << endl;  // False
    cout << solveBoolean("t&f") << endl;  // False

    return 0;
}