#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool result = false, prevResult = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            prevResult = true;
        } else if (s[i] == 'F') {
            prevResult = false;
        } else if (s[i] == '&') {
            st.push(s[i]);
        } else if (s[i] == '|') {
            while (!st.empty()) {
                char op = st.top();
                st.pop();
                if (op == '&') {
                    result = prevResult && result;
                } else if (op == '|') {
                    result = prevResult || result;
                }
            }
        }
    }

    return result;
}