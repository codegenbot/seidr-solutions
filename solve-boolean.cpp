#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) return false;
            st.pop();
        } else if(s[i] == '|') {
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) return true;
            st.push('|');
        } else if(s[i] != ' ' && s[i] != '&' && s[i] != '|') {
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        st.pop();
    }
    return st.empty() ? true : false;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    getline(cin, input);
    bool result = solveBoolean(input);
    if(result) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}