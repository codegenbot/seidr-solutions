#include <iostream>
#include <string>
#include <stack>

bool evaluateBooleanExpression(const std::string& expr) {
    std::stack<bool> st;
    for (char c : expr) {
        if (c == 't') {
            st.push(true);
        } else if (c == 'f') {
            st.push(false);
        } else if (c == '&') {
            bool b1 = st.top(); st.pop();
            bool b2 = st.top(); st.pop();
            st.push(b1 & b2);
        } else if (c == '|') {
            bool b1 = st.top(); st.pop();
            bool b2 = st.top(); st.pop();
            st.push(b1 | b2);
        }
    }
    return st.top();
}

int main() {
    std::string input;
    std::cin >> input;
    
    if (evaluateBooleanExpression(input)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}