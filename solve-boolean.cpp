#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool evaluateBoolean(string input) {
    stack<bool> st;
    
    for (char c : input) {
        if (c == 't') {
            st.push(true);
        } else if (c == 'f') {
            st.push(false);
        } else if (c == '|') {
            bool op1 = st.top();
            st.pop();
            bool op2 = st.top();
            st.pop();
            st.push(op1 || op2);
        } else if (c == '&') {
            bool op1 = st.top();
            st.pop();
            bool op2 = st.top();
            st.pop();
            st.push(op1 && op2);
        }
    }
    
    return st.top();
}

int main() {
    string input;
    cin >> input;
    
    if (evaluateBoolean(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}