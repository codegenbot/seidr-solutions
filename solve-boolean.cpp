#include <iostream>
using namespace std;

string solveBoolean(string s) {
    stack<char> st;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            
            if(a == 'T' && b == 'T')
                st.push('T');
            else
                st.push('F');
        } else if(s[i] == '&') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            
            if(a == 'T' && b == 'T')
                st.push('T');
            else if(a == 'T' || b == 'T')
                st.push('F');
            else
                st.push('F');
        } else {
            st.push(s[i]);
        }
    }
    
    return (st.top() == 'T') ? "True" : "False";
}

int main() {
    string s;
    cout << "Enter Boolean expression: ";
    cin >> s;
    cout << solveBoolean(s) << endl;
    return 0;
}