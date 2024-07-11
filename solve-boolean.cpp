#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) return false;
            st.push('&');
        } else if(s[i] == '|') {
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) return true;
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        if(st.top() == '&') return false;
        if(st.top() == '|') return true;
        st.pop();
    }
    return st.top() == 'T';
}