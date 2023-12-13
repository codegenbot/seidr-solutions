#include <iostream>
#include <string>
#include <stack>

bool evaluateBooleanExpression(const std::string& expression) {
    std::stack<bool> st;
    for (char ch : expression) {
        if (ch == 't') {
            st.push(true);
        } else if (ch == 'f') {
            st.push(false);
        } else if (ch == '&') {
            bool op2 = st.top(); st.pop();
            bool op1 = st.top(); st.pop();
            st.push(op1 && op2);
        } else if (ch == '|') {
            bool op2 = st.top(); st.pop();
            bool op1 = st.top(); st.pop();
            st.push(op1 || op2);
        }
    }
    return st.top();
}

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}