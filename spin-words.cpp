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
int main() {
    string s;
    while (getline(cin, s)) {
        string res = "";
        int start = 0;
        int end = 0;
        while (end < s.size()) {
            if (s[end] != ' ') {
                end++;
            } else {
                if (end - start >= 5) {
                    for (int i = end - 1; i >= start; i--) {
                        res += s[i];
                    }
                } else {
                    res += s.substr(start, end - start);
                }
                res += ' ';
                end++;
                start = end;
            }
        }
        if (end - start >= 5) {
            for (int i = end - 1; i >= start; i--) {
                res += s[i];
            }
        } else {
            res += s.substr(start, end - start);
        }
        cout << res << endl;
    }
    return 0;
}
