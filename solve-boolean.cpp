```
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    stack<bool> val; // Store the actual value of T/F
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!val.empty() && !val.top()) { // Evaluate the & operator
                val.pop();
            }
            st.push('&');
        } else if (s[i] == '|') {
            while (!val.empty() && val.top()) { // Evaluate the | operator
                val.pop();
            }
            st.push('|');
        } else {
            val.push(s[i] == 'T'); // Store the value of T/F as bool
            st.push(s[i]);
        }
    }
    while (!st.empty() && st.top() == '&') { // Evaluate the remaining operators
        st.pop();
    }
    return val.empty(); // Return true if all values were F, false otherwise
}