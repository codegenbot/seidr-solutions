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

// | is evaluated first
// & is evaluated second
// T is true and F is false
// no parenthesis
bool eval(string s) {
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '|') {
            bool l = s[i-1] == 't';
            bool r = s[i+1] == 't';
            s.erase(i-1, 3);
            s.insert(i-1, 1, l||r ? 't' : 'f');
            i = 0;
        }
        else if (s[i] == '&') {
            bool l = s[i-1] == 't';
            bool r = s[i+1] == 't';
            s.erase(i-1, 3);
            s.insert(i-1, 1, l&&r ? 't' : 'f');
            i = 0;
        }
        else {
            i++;
        }
    }
    return s[0] == 't';
}

int main() {
    cout << eval("t") << endl;
    cout << eval("f") << endl;
    cout << eval("f&f") << endl;
    cout << eval("f&t") << endl;
    cout << eval("t&f") << endl;
    cout << eval("t&t") << endl;
    cout << eval("t|f") << endl;
    cout << eval("t|t") << endl;
    cout << eval("f|f") << endl;
    cout << eval("t&t|f") << endl;
    cout << eval("t&t|f&f") << endl;
    cout << eval("f|t&f") << endl;
    cout << eval("t&t|f&t") << endl;
    cout << eval("f|t&f|f") << endl;
    cout << eval("f|f|f&t|t|t&f") << endl;
    return 0;
}
