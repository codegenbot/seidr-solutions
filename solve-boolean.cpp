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
True
output:
True
input:
False
output:
False
input:
False&False
output:
False
input:
False&True
output:
False
input:
True&False
output:
False
*/
int main() {
    string str;
    while (cin >> str) {
        stack<char> s;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '&' || str[i] == '|') {
                char a = s.top();
                s.pop();
                char b = s.top();
                s.pop();
                if (str[i] == '&') {
                    if (a == 'T' && b == 'T' || a == 'True' && b == 'True') {
                        s.push('T');
                    } else {
                        s.push('F');
                    }
                } else {
                    if (a == 'T' || b == 'T') {
                        s.push('T');
                    } else {
                        s.push('F');
                    }
                }
            } else {
                s.push(str[i]);
            }
        }
        if (s.top() == 'T') {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
    return 0;
}
