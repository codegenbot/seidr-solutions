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
        cin >> s;
        bool flag = true;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'f') {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "True" << endl;
            return 0;
        }
        flag = false;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 't') {
                flag = true;
                break;
            }
        }
        if(flag) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
        
        return 0;
}
