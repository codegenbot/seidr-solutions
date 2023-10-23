#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <algorithm>
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
    string s = "";
    int len = 0;
    while (getline(cin, s)) {
        len = s.size();
        int i = 0;
        string res = "";
        while (i < len) {
            while (i < len && s[i] == ' ') {
                res += ' ';
                i++;
            }
            string word = "";
            while (i < len && s[i] != ' ') {
                word += s[i];
                i++;
            }
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            res += word;
        }
        cout << res << endl;
    }
    return 0;
}
