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
    string str;
    cin >> str;
    stack<char> stk;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '&' || str[i] == '|') {
            char c1 = stk.top();
            stk.pop();
            char c2 = stk.top();
            stk.pop();
            if(str[i] == '&') {
                stk.push(c1 == 'T' && c2 == 'T' ? 'T' : 'F');
            } else {
                stk.push(c1 == 'F' && c2 == 'F' ? 'F' : 'T');
            }
        } else {
            stk.push(str[i]);
        }
    }
    cout << (stk.top() == 'T' ? "True" : "False") << endl;
    return 0;
}
