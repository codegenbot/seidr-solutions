using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            }
        } else {
            st.push(s[i]);
        }
    }
    if (st.top() == '&') {
        return false;
    } else if (st.top() == '|') {
        return true;
    } else {
        return st.top() == 'T';
    }
}