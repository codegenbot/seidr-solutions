#include <queue>
#include <stack>
#include <string>
#include <iostream>

bool evaluateTop(std::stack<char> &st) {
    char c;
    while (!st.empty()) {
        c = st.top();
        st.pop();
        if (c == '&') {
            return !st.empty();
        } else if (c == '|') {
            while (!st.empty() && st.top() != '(') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            c = st.top();
            st.pop();
        } else {
            if (c == 'T' || c == 'F') {
                return c == 'T';
            } else {
                return false;
            }
        }
    }
    return true;
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