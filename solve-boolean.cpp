#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
*/

class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;
        for(int i = 0; i < expression.size(); i++) {
            char c = expression[i];
            if(c == ')') {
                vector<bool> v;
                while(!st.empty()) {
                    char c = st.top();
                    st.pop();
                    if(c == '(') break;
                    v.push_back(c == 't');
                }
                char op = st.top();
                st.pop();
                bool b = false;
                if(op == '&') {
                    b = true;
                    for(auto a : v) {
                        b &= a;
                    }
                } else if(op == '|') {
                    b = false;
                    for(auto a : v) {
                        b |= a;
                    }
                } else {
                    b = true;
                    for(auto a : v) {
                        b &= !a;
                    }
                }
                st.push(b?'t':'f');
            } else {
                st.push(c);
            }
        }
        return st.top() =='t';
    }
};
int main() {
    Solution s = Solution();
    cout<<boolalpha<<s.parseBoolExpr("|(&(t,f,t),!(t))")<<endl;
    return 0;
}
