```c++
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    stack<char> st;
    
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