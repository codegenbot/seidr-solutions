#include <stack>
#include <string>
#include <iostream>

bool evaluateTop(std::stack<char> &st) {
    bool result = true;
    while (!st.empty()) {
        char c = st.top();
        st.pop();
        if (c == '(') {
            st.push(c); // push back onto the stack
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                if (st.top() == '|') {
                    result = true; // reset for OR
                } else {
                    result = false; // short-circuit for AND
                    return result;
                }
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); // pop the '('
            }
        } else if (c == 'T' || c == 'F') {
            while (!st.empty() && st.top() != '(') {
                if (st.top() == '|') {
                    result = true; // reset for OR
                } else {
                    result = false; // short-circuit for AND
                    return result;
                }
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); // pop the '('
            }
            result = (c == 'T'); // set the result based on the character
        } else if (c == '|') {
            while (!st.empty() && st.top() != '(') {
                if (st.top() == '&') {
                    result = false; // reset for AND
                }
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); // pop the '('
            }
        } else if (c == '&') {
            while (!st.empty() && st.top() != '(') {
                st.pop();
            }
            if (!st.empty()) {
                c = st.top();
                st.pop();
                if (c == '|') {
                    result = false; // reset for OR
                } else {
                    return result; // short-circuit for AND
                }
            }
        }
    }
    return result;
}

int main() {
    std::stack<char> st;
    // initialize stack with input string here
    bool result = evaluateTop(st);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}