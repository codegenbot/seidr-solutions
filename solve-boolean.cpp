#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (!st.empty() && st.top() == '|') {
                st.pop();
                return false;
            } else if (!st.empty() && st.top() == 'F') {
                st.pop();
                return false;
            } else if (i == s.length() - 1) {
                return true;
            }
        } else if (s[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
        } else if (s[i] == 'T' || s[i] == 'F') {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}