#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'T')
            res = true;
        else if(s[i] == 'F')
            res = false;
        else if(s[i] == '|') {
            while(!st.empty()) st.pop();
            bool temp = res;
            res = (res) ? true : false;
        }
        else if(s[i] == '&') {
            while(!st.empty()) st.push(st.top());
            bool temp = res;
            res = (res) ? true : false;
            while(!st.empty()) st.pop();
            res = temp && res;
        }
    }
    
    return res;
}