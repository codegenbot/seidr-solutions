```cpp
#include <string>
using namespace std;

bool solveBoolean(string st) {
    stack<char> st;
    for (int i = 0; i < st.length(); i++) {
        if (st[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            else st.pop();
        } 
        else if (st[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            else st.pop();
        } 
        else {
            st.push(st[i]);
        }
    }
    return !st.empty();
}