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
bool AND( bool a, bool b){
    if(a == true && b == true){
        return true;
    } else {
        return false;
    }
}

bool OR( bool a, bool b){
    if(a == true || b == true){
        return true;
    } else {
        return false;
    }
}

bool evaluateUtil(string s, int& i){
    bool ans;
    if(s[i] == 't'){
        ans = true;
        i += 2;
    } else if (s[i] == 'f'){
        ans = false;
        i +=2;
    } else if (s[i] == '&'){
        i += 2;
        bool lhs = evaluateUtil(s, i);
        bool rhs = evaluateUtil(s, i);
        ans = AND(lhs, rhs);
    } else if (s[i] == '|'){
        i += 2;
        bool lhs = evaluateUtil(s, i);
        bool rhs = evaluateUtil(s, i);
        ans = OR(lhs, rhs);
    }
    return ans;
}

string evaluate(string s){
    int i = 0;
    return evaluateUtil(s, i) ? "true" : "false";
}

int main() {
    string s;
    cin >> s;
    cout << evaluate(s);
    cout << endl;
    return 0;
}
