#include <stack>
#include <string>
#include <iostream>

bool evaluate(char c) {
    if (c == 'T')
        return true;
    else if (c == 'F')
        return false;
}

bool solveBoolean(std::string expression) {
    std::stack<char> st;
    for (char c : expression) {
        if (std::isalpha(c)) {
            st.push(c);
        } else if (c == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
                bool top = evaluate(st.top());
                st.pop();
                if (top) {
                    st.push('&');
                } else {
                    st.push('|');
                }
            }
            st.push(c);
        } else if (c == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
                bool top = evaluate(st.top());
                st.pop();
                if (top) {
                    st.push('&');
                } else {
                    st.push('|');
                }
            }
            st.push(c);
        }
    }
    return !st.empty();
}

int main() {
    std::string expression = "T|F&f|t&t&t&f|f|t&t|t|f&f";
    bool result = solveBoolean(expression);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}