#include <stack>
#include <string>

std::string solveBoolean(std::string s) {
    std::stack<char> st;
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
    
    char res = 'T';
    while(!st.empty()){
        if(st.top() == '&') res = (res == 'T') ? 'T' : 'F';
        else if(st.top() == '|') res = (res == 'T') ? 'T' : 'F';
        st.pop();
    }
    
    return res == 'T' ? "True" : "False";
}