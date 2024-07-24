using namespace std;

string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    string res = "";
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return (res == "T") ? "True" : (res == "F") ? "False" : to_string(eval(res));
}

string eval(string s) {
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '&') {
            i++;
            if (s[i] == 'T') {
                return "F";
            } else {
                return "F";
            }
        } else if (s[i] == '|') {
            i++;
            if (s[i] == 'T') {
                return "T";
            } else {
                return "F";
            }
        } else {
            i++;
        }
    }
    return s;
}