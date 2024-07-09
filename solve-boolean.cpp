#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool result = false, op1 = false, op2 = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 'F') {
            while (!st.empty() && st.top() != '|') {
                st.pop();
            }
            if (!st.empty() && st.top() == '|') {
                st.pop();
                op1 = true;
            } else if (st.empty()) {
                result = (s[i] == 'T');
            } else {
                st.push(s[i]);
                op2 = s[i] == 'T';
            }
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() != '&') {
                st.pop();
            }
            if (!st.empty() && st.top() == '&') {
                st.pop();
                result = op1 && op2;
            } else {
                st.push(s[i]);
            }
        } else if (s[i] == '&') {
            while (!st.empty()) {
                st.pop();
            }
            st.push(s[i]);
        }
    }

    return result;
}