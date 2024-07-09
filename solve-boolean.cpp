using namespace std;

string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            while (!st.empty() && st.top() != '&') {
                if (st.top() == 'T')
                    st.pop();
                else
                    return "False";
            }
            st.pop();
        } else if (s[i] == '&') {
            st.push(s[i]);
        } else {
            st.push(s[i]);
        }
    }
    if (st.empty())
        return "True";
    else
        return "False";
}