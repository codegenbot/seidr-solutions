```c++
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    stack<char> st;
    for (char c : expression) {
        if (c == '|') {
            st.push(c);
        } else if (c == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
        }
    }
    return !st.empty();
}