Here is the solution:

bool solveBoolean(string s) {
    if(s.length() == 0)
        return false;
    
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if(c == '&')
            while(!st.empty()) {
                if(st.top() == 'F') {
                    st.pop();
                    break;
                }
                else
                    st.pop();
            }
        else if(c == '|') 
            while(!st.empty()) {
                st.pop();
            }  
        else {
            st.push(c);
        }
    }
    
    return st.size() > 0 && st.top() != 'F';
}

int main() {
    string s;
    cin >> s;
    bool res = solveBoolean(s);
    if(res)
        cout << "True";
    else
        cout << "False";
    return 0;
}