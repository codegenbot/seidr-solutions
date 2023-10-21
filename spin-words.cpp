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

string reverseWords(string s) {
    string res;
    int pos = 0;
    int len = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (len >= 5) {
                for (int j = pos + len - 1; j >= pos; j--) {
                    res += s[j];
                }
            } else {
                res += s.substr(pos, len);
            }
            res += ' ';
            len = 0;
            pos = i + 1;
        } else {
            len++;
        }
    }
    if (len >= 5) {
        for (int j = pos + len - 1; j >= pos; j--) {
            res += s[j];
        }
    } else {
        res += s.substr(pos, len);
    }
    return res;
}

int main() {
    cout << reverseWords("this is a test") << endl;
    cout << reverseWords("this is another test") << endl;
    cout << reverseWords("hi") << endl;
}
