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

bool solve(string s, int start, int end, unordered_map<string, bool> &m) {
    if (start == end) {
        return s[start] == 'T';
    }
    if (m.count(s.substr(start, end -start + 1))) {
        return m[s.substr(start, end -start + 1)];
    }
    bool ans = false;
    for (int i = start; i <= end - 2; i+=2) {
        bool l = solve(s, start, i -1, m);
        bool r = solve(s, i + 1, end, m);
        if (s[i] == '&') {
            ans |= l && r;
        } else {
            ans |= l || r;
        }
        if (ans) {
            m[s.substr(start, end -start + 1)] = ans;
            return ans;
        }
    }
    m[s.substr(start, end -start + 1)] = ans;
    return ans;
}

bool solve(string s) {
    unordered_map<string, bool> m;
    return solve(s, 0, s.size()-1, m);
}

int main() {
    cout << solve("t&f") << endl;
    cout << solve("t&t") << endl;
    cout << solve("t|f") << endl;
    cout << solve("t|t") << endl;
    cout << solve("f&f") << endl;
    cout << solve("f|f") << endl;
    cout << solve("t|f&t&t&t|t") << endl;
    cout << solve("f|f|f|f&f&t|t") << endl;
}
