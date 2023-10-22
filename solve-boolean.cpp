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
https://www.hackerrank.com/challenges/truth-table-1/problem
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

string bool_to_word(bool value) {
    if(value) return "True";
    else return "False";
}

int main() {
    string s;
    cin>>s;
    bool a = s[0] == 't';
    bool b = s[2] == 't';
    bool c = s[1] == '|';
    if(c) cout<<bool_to_word(a|b)<<endl;
    else cout<<bool_to_word(a&b)<<endl;
    return 0;
}
