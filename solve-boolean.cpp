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

bool evaluateBool(string &s, int &i){
    if(s[i] == 't') {
        i++;
        return true;
    }else if(s[i] == 'f') {
        i++;
        return false;
    }else{
        i++;
        bool left = evaluateBool(s, i);
        char op = s[i];
        i++;
        bool right = evaluateBool(s, i);
        if(op == '&'){
            return left & right;
        }else{
            return left | right;
        }
    }
}

int main() {
    string s;
    //while(cin >> s){
    cin >> s;
        int i = 0;
        bool res = evaluateBool(s, i);
        if(res){
            cout << "True" << endl;
        }else{
            cout << "False" << endl;
        }
    //}
    return 0;
}
