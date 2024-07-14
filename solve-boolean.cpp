#include <stack>
#include <string>
#include <iostream>

bool evaluateTop(std::stack<char> &st) {
    bool result = true;
    int parenthesesCount = 0;
    while (!st.empty()) {
        char c = st.top();
        st.pop();
        if (c == '(') {
            parenthesesCount++;
        } else if (c == ')') {
            parenthesesCount--;
        } else if (c == 'T' || c == 'F') {
            if (parenthesesCount > 0) {
                st.push(c);
            } else {
                result = (c == 'T');
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