#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool result = false;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) {
                result = true;
            } else {
                result = false;
            }
            st.push('&');
        } else if(s[i] == '|') {
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) {
                result = false;
            } else {
                result = true;
            }
            st.push('|');
        } else if(s[i] == 'T' || s[i] == 't') {
            while(!st.empty()) {
                st.pop();
            }
            result = true;
        } else if(s[i] == 'F' || s[i] == 'f') {
            while(!st.empty()) {
                st.pop();
            }
            result = false;
        }
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;
    bool res = solveBoolean(s);
    if(res) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}