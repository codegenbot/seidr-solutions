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

bool parseBool(char c) {
    if (c == 'T') {
        return 1;
    } else if (c == 'F') {
        return 0;
    }
}

bool eval(string& s, int& pos) {
    char c = s[pos];
    
    if (c == 'T' || c == 'F') {
        pos ++;
        return parseBool(c);
    }
    
    pos += 2;
    bool left = eval(s, pos);
    
    bool ret = left;
    c = s[pos];
    while (c == '|' || c == '&') {
        pos += 2;
        bool right = eval(s, pos);
        
        if (c == '|') {
            ret = left | right;
        } else {
            ret = left & right;
        }
        
        c = s[pos];
        left = right;
    }
    
    return ret;
}

bool evalBool(string& s) {
    int pos = 0;
    return eval(s, pos);
}

int main() {
    
}
