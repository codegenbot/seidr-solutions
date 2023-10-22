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
#include <deque>
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

int getValue(char c){
    if(c == 'T') return 1;
    else if(c == 'F') return 0;
    return -1;
}

char cal(char a, char b, char operator_){
    if(operator_ == '|') return a | b;
    else if(operator_ == '&') return a & b;
    return 0;
}

char eval(string exp){
    deque<char> a;
    
    for(int i = 0; i < exp.size(); i++){
        if(exp[i] != '|' && exp[i] != '&'){
            a.push_back(getValue(exp[i]));
        }else{
            char b = a.back();
            a.pop_back();
            char c = a.back();
            a.pop_back();
            a.push_back(cal(c, b, exp[i]));
        }
    }
    if(a.back()) return 'T';
    else return 'F';
}
int main() {
    string s = "t|&f&t";
    cout<<eval(s)<<endl;
}
