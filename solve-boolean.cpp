#include <vector>
#include <iostream>
using namespace std;

string solveBoolean(string s) {
    stack<char> st;
    
    for(int i=0; i<s.length();i++) {
        if(s[i] == '&') {
            while(st.size() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) {
                return "True";
            } else {
                st.pop();
                return "False";
            }
        } 
        else if(s[i] == '|') {
            while(!st.empty()) {
                st.pop();
            }
        } 
        else {
            st.push(s[i]);
        }
    }
    
    if(st.size() > 0) {
        return st.top() == 'T' ? "True" : "False";
    } else {
        return "True";
    }
}

int main() {
    string s;
    cout << "Enter a Boolean expression (e.g., t, f, f&f): ";
    cin >> s;
    
    cout << solveBoolean(s) << endl;

    return 0;
}