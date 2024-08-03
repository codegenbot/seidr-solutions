#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool evaluateExpression(const string& expression) {
    stack<char> st;

    for (char c : expression) {
        if (c == 't' || c == 'f') {
            st.push(c);
        } else if (c == '|' || c == '&') {
            char operand1 = st.top();
            st.pop();
            char operand2 = st.top();
            st.pop();

            if (c == '|') {
                if (operand1 == 't' || operand2 == 't') {
                    st.push('t');
                } else {
                    st.push('f');
                }
            } else {
                if (operand1 == 't' && operand2 == 't') {
                    st.push('t');
                } else {
                    st.push('f');
                }
            }
        }
    }

    return st.top() == 't';
}

int main() {
    string expression;
    cin >> expression;

    if (evaluateExpression(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}