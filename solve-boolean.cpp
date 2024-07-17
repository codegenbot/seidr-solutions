```
#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    st.push('&');
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            while(st.top() != '&') {
                char c = st.top(); 
                st.pop();
                if(c == 'T') {
                    st.push('T');
                } else if(c == 'F') {
                    st.push('F');
                }
            }
            st.pop();
        } else if(s[i] == '&') {
            while(st.top() != '|') {
                char c = st.top(); 
                st.pop();
                if(c == 'T') {
                    st.push('T');
                } else if(c == 'F') {
                    st.push('F');
                }
            }
            st.push('&');
        }
    }
    return st.top() == '&';
}