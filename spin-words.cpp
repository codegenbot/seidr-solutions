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
    getline(cin, s);
    string ans = "";
    int i = 0;
    int j = 0;
    while (i < s.size()) {
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        j = i;
        while (j < s.size() && s[j] != ' ') {
            j++;
        }
        string t = s.substr(i, j - i);
        if (t.size() >= 5) {
            reverse(t.begin(), t.end());
        }
        ans += t;
        i = j;
        while (i < s.size() && s[i] == ' ') {
            ans += s[i];
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
