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
                result = (result || (resStack.top() == 'T'));
                resStack.pop();
            }
            if (!resStack.empty()) {
                resStack.pop(); // pop the '('
            }
        } else if (c == 'T' || c == 'F') {
            while (!resStack.empty() && resStack.top() != '(') {
                result = (result || (resStack.top() == 'T'));
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
    std::stack<char> st;
    std::string input;
    std::cout << "Enter a Boolean expression (T/F/&(|)): ";
    std::getline(std::cin, input);
    for (char c : input) {
        if (c == '(') {
            st.push('(');
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                st.pop();
            }
            if (st.empty()) {
                std::cout << "Invalid expression" << std::endl;
                return 1;
            }
            st.pop();
        } else {
            st.push(c);
        }
    }
    bool result = evaluateTop(st);
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    return 0;
}