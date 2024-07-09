using namespace std;

string solveBoolean(string s) {
    stack<char> st;
    bool temp = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 'F') {
            while (!st.empty()) st.pop();
            st.push(s[i]);
        } else if (s[i] == '|') {
            temp = (st.top() == 'T');
            st.pop();
        } else if (s[i] == '&') {
            while (!st.empty() && st.top() != '&') st.pop();
            if (st.empty()) return "False";
            st.pop();
        }
    }
    return temp ? "True" : "False";
}