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
int main() {
    string s;
    while(cin >> s){
        stack<char> stk;
        int len = s.length();
        bool ans = true;
        for(int i = 0; i < len; i ++){
            if(s[i] == 'f') ans = false;
            else if(s[i] == 't') ans = true;
            else if(s[i] == '|'){
                bool t = stk.top();
                stk.pop();
                t = ans || t;
                stk.push(t);
                ans = true;
            }
            else if(s[i] == '&'){
                bool t = stk.top();
                stk.pop();
                t = ans && t;
                stk.push(t);
                ans = true;
            }
        }
        cout << (stk.top() ? "true" : "false") << endl;
    }
    return 0;
}
