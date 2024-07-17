#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            if(st.top() == 'T') {
                st.pop();
                st.push('T');
            } else if(st.top() == 'F') {
                st.pop();
                st.push('T');
            }
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
            if(st.top() == 'T') {
                st.pop();
                st.push('T');
            } else if(st.top() == 'F') {
                st.pop();
                st.push('F');
            }
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
    return st.top() == 'T';
}