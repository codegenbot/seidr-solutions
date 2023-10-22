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
    string a;
    while (getline(cin, a)) {
        int n = a.length();
        string res;
        int i = 0, len = 0;
        while (i < n) {
            while (i < n && a[i] == ' ') {
                res.push_back(' ');
                i++;
            }
            for (len = 0; i < n && a[i] != ' '; i++, len++);
            if (len < 5) {
                for (int j = 0; j <= len; j++) {
                    res.push_back(a[i-j-1]);
                }
            } else {
                for (int j = 1; j <= len; j++) {
                    res.push_back(a[i-j]);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
