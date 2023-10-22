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
void reverseWord(string &s, int i, int j) {
    while (i < j) {
        swap(s[i], s[j]);
        i++; j--;
    }
}

void reverseWords(string &s) {
    int start = 0;
    int wordLen = 0;
    int cur = 0;
    while (cur < s.size()) {
        if (s[cur] == ' ') {
            if (wordLen >= 5) {
                reverseWord(s, start, cur - 1);
            }
            wordLen = 0;
            start = cur + 1;
        } else {
            wordLen++;
        }
        cur++;
    }
    if (wordLen >= 5) {
        reverseWord(s, start, cur - 1);
    }
}

int main() {
    string s;
    getline(cin, s);
    reverseWords(s);
    cout << s << endl;
}
