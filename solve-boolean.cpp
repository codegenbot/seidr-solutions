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
    if (s.length() > 1 && (s[0] == '&' || s[0] == '|')) {
        int i = 1;
        while (i < s.length() && (s[i] == '&' || s[i] == '|')) {
            i++;
        }
        string left = s.substr(1, i - 1);
        string right = s.substr(i);
        if (s[0] == '&') return (eval(left).compare("True") == 0 && eval(right).compare("True") == 0) ? "True" : "False";
        else return (eval(left).compare("True") == 0 || eval(right).compare("True") == 0) ? "True" : "False";
    } else if (s.length() > 1 && s[0] == '&') {
        return (eval(s.substr(1)).compare("True") == 0) ? "True" : "False";
    } else if (s.length() > 1 && s[0] == '|') {
        return (eval(s.substr(1)).compare("True") == 0 || eval(s.substr(1)).compare("True") == 0) ? "True" : "False";
    }
    return s;
}