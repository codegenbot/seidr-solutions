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
    getline(cin, s);
    int n = (int) s.size();
    for (int i = 0; i < n; ++i) {
        int j = i, l = 0;
        while (j < n && s[j] != ' ') { ++j; ++l; }
        if (l >= 5) {
            for (int k = 0; k < l / 2; ++k) {
                swap(s[i + k], s[i + l - k - 1]);
            }
        }
        i = j;
    }
    cout << s;
    return 0;
}
