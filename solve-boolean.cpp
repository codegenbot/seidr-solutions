#include <string>
using namespace std;

bool evaluateBoolean(string s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            char a = st.top(); st.pop();
            char b = st.top(); st.pop();
            st.push((a == 'T' && b == 'T') ? 'T' : 'F');
        }
        else if(s[i] == '|') {
            char a = st.top(); st.pop();
            char b = st.top(); st.pop();
            st.push((a == 'T' || b == 'T') ? 'T' : 'F');
        } 
        else {
            st.push(s[i]);
        }
    }
    return (st.top() == 'T');
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cout << (evaluateBoolean(s) ? "True" : "False") << endl;
    }
    return 0;
}