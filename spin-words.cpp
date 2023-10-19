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
    string str;
    getline(cin, str);
    string cur = "";
    string res = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (cur.length() >= 5) {
                reverse(cur.begin(), cur.end());
            }
            res += cur + " ";
            cur = "";
        } else {
            cur += str[i];
        }
    }
    if (cur.length() >= 5) {
        reverse(cur.begin(), cur.end());
    }
    res += cur;
    cout << res << endl;
    return 0;
}
