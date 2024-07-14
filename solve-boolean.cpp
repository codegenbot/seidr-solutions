#include <stack>
#include <string>
#include <iostream>

bool solveBoolean(std::string expression) {
    std::stack<char> st;
    for (char c : expression) {
        if (std::isalpha(c)) {
            st.push(c);
        } else if (c == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push(c);
        } else if (c == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            st.push(c);
        }
    }
    return !st.empty();
}

int main() {
    std::string expression = "T|F&";
    bool result = solveBoolean(expression);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}