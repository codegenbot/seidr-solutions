#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool prevT = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            prevT = true;
        } else if (s[i] == 'F') {
            prevT = false;
        } else if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (prevT) return false;
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (prevT) return true;
        } else {
            st.push(s[i]);
        }
    }
    return prevT;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;