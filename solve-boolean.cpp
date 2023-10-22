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
    string str,substr;
    bool ans =true;
    int len, i, front, middle, back;
    char ch;
    cin >> str;
    len = (int)str.length();
    stack<bool> s;
    for(i = len - 1; i >= 0 ; i--) {
        if(str[i] == '&') {
            ans = true;
            front = (int)s.size();
            for(int j = 0; j < front; j++) {
                ch = s.top();
                s.pop();
                if(ch == false) {
                    ans = false;
                    break;
                }
            }
            s.push(ans);
        } else if(str[i] == '|') {
            ans = false;
            front = (int)s.size();
            for(int j = 0; j < front; j++) {
                ch = s.top();
                s.pop();
                if(ch == true) {
                    ans = true;
                    break;
                }
            }
            s.push(ans);
        } else{
            if(str[i] == 't') s.push(true);
            else s.push(false);
        }
    }
    cout << (bool)s.top() << "\n";
}
