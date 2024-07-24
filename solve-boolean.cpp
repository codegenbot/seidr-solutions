Here is the solution:

string solveBoolean(string s) {
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) return "False";
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) return "False";
        } else {
            st.push(s[i]);
        }
    }
    if(st.empty()) return "True";
    return (st.top() == 'T') ? "True" : "False";
}