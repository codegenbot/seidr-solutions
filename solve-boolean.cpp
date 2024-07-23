#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;
    
    for(int i=s.length()-1; i>=0; i--) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) {
                res = true;
            } else {
                res = false;
            }
        } else if(s[i] == '|') {
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) {
                res = false;
            } else {
                res = true;
            }
        } else {
            st.push(s[i]);
        }
    }
    
    return res;
}