```c++
#include <stack>
#include <string>
#include <iostream>

bool evaluateTop(std::stack<char> &st) {
    bool result = true;
    std::stack<char> resStack;
    while (!st.empty()) {
        char c = st.top();
        st.pop();
        if (c == '(') {
            resStack.push('(');
        } else if (c == ')') {
            while (!resStack.empty() && resStack.top() != '(') {
                if (resStack.top() == '|') {
                    result = true; // reset the result for OR operation
                }
                resStack.pop();
            }
            if (!resStack.empty()) {
                resStack.pop(); // pop the '('
            }
        } else if (c == 'T' || c == 'F') {
            while (!resStack.empty() && resStack.top() != '(') {
                if (resStack.top() == '|') {
                    result = true; // reset the result for OR operation
                }
                resStack.pop();
            }
            if (!resStack.empty()) {
                resStack.pop(); // pop the '('
            }
            if (c == 'T') {
                result = true;
            } else {
                result = false;
            }
        } else if (c == '&') {
            while (!st.empty() && st.top() != '(') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            c = st.top();
            st.pop();
            if (c == '|') {
                result = true; // reset the result for OR operation
            } else {
                while (!st.empty() && st.top() != '(') {
                    st.pop();
                }
                if (st.empty()) {
                    return false;
                }
                c = st.top();
                st.pop();
                if (c == 'T') {
                    result = true; // short-circuit
                } else {
                    result = false; // short-circuit
                }
            }
        } else if (c == '|') {
            while (!st.empty() && st.top() != '(') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            c = st.top();
            st.pop();
            if (c == '&') {
                result = true; // reset the result for AND operation
            } else {
                while (!st.empty() && st.top() != '(') {
                    st.pop();
                }
                if (st.empty()) {
                    return false;
                }
                c = st.top();
                st.pop();
                if (c == 'T') {
                    result = true; // short-circuit
                } else {
                    result = false; // short-circuit
                }
            }
        }
    }
    while (!resStack.empty()) {
        if (resStack.top() == '(') {
            return false;
        }
        result = (result || (resStack.top() == 'T'));
        resStack.pop();
    }
    return result;
}

int main() {
    std::string expression;
    std::cin >> expression;

    std::stack<char> stack;
    for (char c : expression) {
        if (c == '(' || c == ')' || c == '|' || c == '&') {
            stack.push(c);
        } else {
            while (!stack.empty() && stack.top() != '(') {
                char top = stack.top();
                stack.pop();
                if (top == '|') {
                    result = true; // reset the result for OR operation
                } else if (top == '&') {
                    while (!stack.empty() && stack.top() != '(') {
                        stack.pop();
                    }
                    if (stack.empty()) {
                        return false;
                    }
                    top = stack.top();
                    stack.pop();
                    if (top == 'T') {
                        result = true; // short-circuit
                    } else {
                        result = false; // short-circuit
                    }
                }
            }
        }
    }

    std::cout << (evaluateTop(stack) ? "True" : "False") << std::endl;

    return 0;
}