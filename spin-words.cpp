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
#include <algorithm>
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
        int i = 0;
        while (i < s.size()) {
            string tmp = "";
            while (i < s.size() && s[i] != ' ') {
                tmp += s[i];
                i++;
            }
            if (tmp.size() >= 5) {
                reverse(tmp.begin(), tmp.end());
            }
            res += tmp;
            if (i < s.size()) {
                res += ' ';
            }
            i++;
        }
        cout << res << endl;
    }
    return 0;
}
