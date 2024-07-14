#include <queue>
#include <stack>
#include <string>
using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> st;
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
        } else if (booleanExpression[i] == '&') {
            st.push('&');
        } else if (booleanExpression[i] == 'T' || booleanExpression[i] == 'F') {
            while (!st.empty()) {
                st.pop();
            }
            if (booleanExpression[i] == 'T')
                return true;
            else
                return false;
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    return true;
}