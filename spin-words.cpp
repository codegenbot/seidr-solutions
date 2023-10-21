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

string reverseWords(string str) {
    string res = "";
    int cur = 0;
    int len = str.size();
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            if (i - cur >= 5) {
                for (int j = i - 1; j >= cur; j--) {
                    res += str[j];
                }
            } else {
                for (int j = cur; j < i; j++) {
                    res += str[j];
                }
            }
            res += ' ';
            cur = i + 1;
        }
    }
    if (len - cur >= 5) {
        for (int j = len - 1; j >= cur; j--) {
            res += str[j];
        }
    } else {
        for (int j = cur; j < len; j++) {
            res += str[j];
        }
    }
    return res;
}

int main() {
    string str;
    while (cin >> str) {
        cout << reverseWords(str) << endl;
    }
    return 0;
}
