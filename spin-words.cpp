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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/

string reverse(string s) {
    string res;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        res += s[i];
    }
    return res;
}

int main() {
    string s;
    string res;
    getline(cin, s);
    int n = s.size();
    int start = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            if (i - start >= 5) {
                res += reverse(s.substr(start, i - start));
            } else {
                res += s.substr(start, i - start);
            }
            res += ' ';
            start = i + 1;
        }
    }
    if (n - start >= 5) {
        for (int j = n - 1; j >= start; j--) {
            res += s[j];
        }
    } else {
        res += s.substr(start, n - start);
    }
    cout << res << endl;
    return 0;
}
