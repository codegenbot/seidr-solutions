#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool res = false, temp = false;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'T')
            temp = true;
        else if(s[i] == 'F')
            temp = false;
        else if(s[i] == '|') {
            res = temp;
            temp = false;
        }
        else if(s[i] == '&') {
            while(!st.empty() && st.top() != '&') {
                res &= temp;
                temp = false;
                st.pop();
            }
            st.push('&');
        }
    }

    return res;
}