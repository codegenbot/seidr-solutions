#include <stack>
#include <string>

bool solveBoolean(string expression) {
    stack<char> st;
    
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) {
                return false;
            } else {
                st.pop();
            }
        } else if(expression[i] == '|') {
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) {
                return true;
            } else {
                st.pop();
            }
        } else {
            st.push(expression[i]);
        }
    }
    
    return !st.empty();