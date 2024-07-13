#include <string>
#include <stack>
#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        if (st.top() == '&') return false;
        if (st.top() == '|') return true;
        st.pop();
    }
    return st.top() == 'T';
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    if (s[0] == 't' || s[0] == 'T') {
        cout << "True" << endl;
    } else if (s[0] == 'f' || s[0] == 'F') {
        cout << "False" << endl;
    } else {
        bool result = solveBoolean(s);
        if (result) cout << "True" << endl;
        else cout << "False" << endl;
    }
    return 0;