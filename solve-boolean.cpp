```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    st.push('&');
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            while(st.top() != '&') {
                if(st.top() == 'T') {
                    st.pop();
                    st.push('T');
                } else if(st.top() == 'F') {
                    st.pop();
                    st.push('T');
                }
                if(st.empty()) break;
                st.pop();
            }
        } else if(s[i] == '&') {
            while(st.top() != '|') {
                if(st.top() == 'T') {
                    st.pop();
                    st.push('T');
                } else if(st.top() == 'F') {
                    st.pop();
                    st.push('F');
                }
                if(st.empty()) break;
                st.pop();
            }
        }
    }
    return st.top() == '&';
}