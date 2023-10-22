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
    string str1 = "t", str2 = "f", str3 = "f&f", str4 = "f&t", str5 = "t&f";
    function<bool(string&, int, int)> helper = [&](string &s, int l, int r){
        if (l == r)
            return s[l] == 't';
        int level = 0;
        for (int i = l; i <= r; ++i) {
            if (s[i] == '(')
                ++level;
            else if (s[i] == ')')
                --level;
            else if (s[i] == '&' || s[i] == '|') {
                if (level == 0) {
                    if (s[i] == '&') {
                        bool r = helper(s, l, i - 1) && helper(s, i + 1, r);
                        return r;
                    } else {
                        bool r = helper(s, l, i - 1) || helper(s, i + 1, r);
                        return r;
                    }
                }
            }
        }
        if (s[l] == '(')
            return helper(s, l + 1, r - 1);
        return false;
    };
    
    cout << helper(str5, 0, (int)str5.size() - 1);
    return 0;
}
