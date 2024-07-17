#include <stack>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<string> st;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            st.push("&");
        } else if (expression[i] == '|') {
            while (!st.empty() && st.top() == "&") {
                st.pop();
            }
        } else {
            if(expression[i] == 'T' || expression[i] == 'F')
                st.push(string(1, expression[i]));
        }
    }

    bool result = true;
    while (!st.empty()) {
        string op = st.top();
        st.pop();
        if (op == "&") {
            result &= (st.top() == "T");
            st.pop();
        } else if (op == "|") {
            if (st.size() > 1) {
                result |= (st.top() == "T");
                st.pop();
            }
        } else {
            result = op == "T";
        }
    }

    return !result;