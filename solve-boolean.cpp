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
bool parseBoolExpr(string expression) {
    bool res = true;
    stack<char> st;
    for(int i = 0; i < expression.size(); i++) {
        char ch = expression[i];
        if(ch == ')') {
            char op = st.top();
            st.pop();
            bool tmp = false;
            while(st.top() != '(') {
                bool cur = st.top() == 't' ? true : false;
                st.pop();
                switch(op) {
                    case '&':
                        tmp &= cur;
                        break;
                    case '|':
                        tmp |= cur;
                        break;
                    case '!':
                        tmp = !cur;
                        break;
                }
            }
            st.pop();
            st.push(tmp ? 't' : 'f');
        } else {
            st.push(ch);
        }
    }
    return st.top() == 't' ? true : false;
}

int main() {
    cout<<parseBoolExpr("t")<<endl;
    cout<<parseBoolExpr("f")<<endl;
    cout<<parseBoolExpr("f&f")<<endl;
    cout<<parseBoolExpr("f&t")<<endl;
    cout<<parseBoolExpr("t&f")<<endl;
}
