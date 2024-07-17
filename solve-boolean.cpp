#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            while(!st.empty()) {
                char c = st.top(); 
                st.pop();
                if(c == '&') {
                    st.push('&');
                    break;
                } else if(c == '|') {
                    st.push('|');
                    break;
                }
            }
        } else if(s[i] == '&') {
            while(!st.empty()) {
                char c = st.top(); 
                st.pop();
                if(c == '|') {
                    st.push('|');
                    break;
                } else if(c == '&') {
                    st.push('&');
                    break;
                }
            }
        }
    }
    return st.empty();
}