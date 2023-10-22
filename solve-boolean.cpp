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
    string line;
    while (getline(cin, line)) {
        int len = (int) line.size();
        bool tf = true;
        stack<char> mystack;
        for (int i = 0; i < len; ++i) {
            if (line[i] == ' ') {
                continue;
            }
            if (line[i] == 't' || line[i] == 'f') {
                mystack.push(line[i]);
            }
            else if (line[i] == '|' || line[i] == '&') {
                mystack.push(line[i]);
            }
            else if (line[i] == ')') {
                char c = mystack.top();
                mystack.pop();
                char c1 = mystack.top();
                mystack.pop();
                char c2 = mystack.top();
                mystack.pop();
                char c3 = mystack.top();
                mystack.pop();
                if (c == '|') {
                    if (c1 == 't' || c2 == 't') {
                        mystack.push('t');
                    }
                    else {
                        mystack.push('f');
                    }
                }
                if (c == '&') {
                    if (c1 == 't' && c2 == 't') {
                        mystack.push('t');
                    }
                    else {
                        mystack.push('f');
                    }
                }
            }
        }
        printf("%s\n", mystack.top() == 't' ? "True" : "False");
    }
}
