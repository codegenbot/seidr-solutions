#include <string>
using namespace std;

bool evaluateBoolean(string s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push('&');
        } else if(s[i] == '|') {
            while(!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }

    while(!st.empty()) {
        st.pop();
    }

    return (st.top() == 'T');
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    if(evaluateBoolean(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}