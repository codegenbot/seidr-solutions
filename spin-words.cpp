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
    string s, res;
    while (getline(cin, s)) {
        res = "";
        int start = 0, end = 0, len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] == ' ') {
                end = i;
                if (end - start >= 5) {
                    for (int j = end - 1; j >= start; j--) {
                        res += s[j];
                    }
                } else {
                    for (int j = start; j < end; j++) {
                        res += s[j];
                    }
                }
                start = end + 1;
                res += ' ';
            }
        }
        if (len - start >= 5) {
            for (int j = len - 1; j >= start; j--) {
                res += s[j];
            }
        } else {
            for (int j = start; j < len; j++) {
                res += s[j];
            }
        }
        cout << res << endl;
    }
    return 0;
}
