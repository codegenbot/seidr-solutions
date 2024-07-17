#include <string>

string solveBoolean(string s) {
    stack<char> st;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == '&'){
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) 
                st.push('T');
            else
                st.push('F');
            st.push('&');
        }else if(s[i] == '|'){
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) 
                st.push('T');
            else
                st.push('F');
            st.push('|');
        }else{
            st.push(s[i]);
        }
    }
    
    string res = "";
    while(!st.empty()){
        res += (st.top() == 'T') ? "True" : "False";
        st.pop();
    }
    
    return res;
}