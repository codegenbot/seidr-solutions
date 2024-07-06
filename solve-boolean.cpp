#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> st;
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
        } 
        else if (expression[i] != 'T' && expression[i] != 'F') {
            continue;
        }
        else {
            st.push(expression[i]);
        }
    }
    while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
        st.pop();
    }
    return st.top() == 'T';
}

int main() {
    cout << boolalpha;
    cout << solveBoolean("t") << endl;  // True
    cout << solveBoolean("f") << endl;  // False
    cout << solveBoolean("f&f") << endl;  // False
    cout << solveBoolean("f&t") << endl;  // False
    cout << solveBoolean("t&f") << endl;  // False
    return 0;
}