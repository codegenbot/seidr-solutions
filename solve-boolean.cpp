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
    getline(cin, s);
    stack<char> foo;
    int flag = 1;
    for (char c : s) {
        if (c == ' ')
            continue;
        else if (c == '|' || c == '&') {
            if (foo.empty())
                flag = 0;
            else {
                foo.pop();
            }
        } else {
            foo.push(c);
        }
    }
    if (flag && foo.size() == 1)
        cout << "True";
    else
        cout << "False";
    
    return 0;
}
