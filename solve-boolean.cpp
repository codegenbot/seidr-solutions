#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool result = false;
    
    stack<char> st; // moved declaration here
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) {
                result = true;
            } else {
                result = false;
            }
        } else if(s[i] == '|') {
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) {
                result = false;
            } else {
                result = true;
            }
        } else {
            st.push(s[i]);
        }
    }
    
    return result;
}