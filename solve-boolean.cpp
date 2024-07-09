using namespace std;

string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') st.pop();
            if (st.empty()) return "False";
            else st.pop();
        } else if (s[i] == '|') {
            while (!st.empty()) st.pop();
            st.push(s[i]);
        } else {
            st.push(s[i] == 'T' ? '1' : '0');
        }
    }
    string res = "";
    while (!st.empty()) {
        res = (st.top() == '1') ? (res.length() > 0 ? (res[0] == '1') ? "True" : "False" : "True") : (res + "False");
        st.pop();
    }
    return res;