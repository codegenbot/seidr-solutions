#include <stack>
#include <string>

std::string solveBoolean(std::string s) {
    stack<char> st;
    bool res = false;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '&'){
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) 
                res = true;
            else
                res = false;
            st.push('&');
        }else if(s[i] == '|'){
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) 
                res = true;
            else
                res = false;
            st.push('|');
        }else{
            if(s[i] == 'T')
                res = true;
            else
                res = false;
            st.push(s[i]);
        }
    }
    
    while(!st.empty()){
        st.pop();
    }
    
    return (res) ? "True" : "False";
}