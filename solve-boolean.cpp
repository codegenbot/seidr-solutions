#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    return st.empty();
}

int main() {
    // Example usage:
    string s1 = "t";
    cout << (solveBoolean(s1) ? "True" : "False") << endl;
    
    string s2 = "f";
    cout << (solveBoolean(s2) ? "True" : "False") << endl;
    
    string s3 = "f&f";
    cout << (solveBoolean(s3) ? "True" : "False") << endl;
    
    string s4 = "f&t";
    cout << (solveBoolean(s4) ? "True" : "False") << endl;
    
    string s5 = "t&f";
    cout << (solveBoolean(s5) ? "True" : "False") << endl;
    
    return 0;
}