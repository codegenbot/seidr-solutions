#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool res = false, temp = false;
    
    for(int i=s.length()-1; i>=0; i--) {
        if(s[i] == '&') {
            res = temp;
            temp = false;
        } else if(s[i] == '|') {
            while (!st.empty()) st.pop();
            temp = res;
            res = false;
        } else if(s[i] == 'T') {
            res = true;
        } else {
            res = false;
        }
        
        if(res) temp = true;
    }
    
    return res;
}