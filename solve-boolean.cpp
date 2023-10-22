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

bool getValue(const string& s, int& pos) {
    if (s[pos] == 't') {
        ++pos;
        return true;
    } else if (s[pos] == 'f') {
        ++pos;
        return false;
    } else if (s[pos] == '(') {
        ++pos;
        bool result = getValue(s, pos);
        if (s[pos] == '|') {
            ++pos;
            result = result || getValue(s, pos);
        } else if (s[pos] == '&') {
            ++pos;
            result = result && getValue(s, pos);
        }
        ++pos;
        return result;
    }
    return false;
}

int main() {
    int pos = 0;
    bool result = getValue("t&f|f", pos);
    cout << result << endl;
}
