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

// a is a test
// a is etsat
// "a" "is" "a" "test"
string reverseWords(string str) {
    int start = -1;
    int end = -1;
    int len = str.size();
    int wordLen = 0;
    int i = 0;
    while (i < len) {
        if (str[i] == ' ') {
            start = i + 1;
            wordLen = 0;
            end = -1;
        } else {
            wordLen++;
            if (wordLen >= 5 && end == -1) {
                end = i;
                int j = start;
                int k = end;
                while (j < k) {
                    swap(str[j++], str[k--]);
                }
            }
        }
        i++;
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << reverseWords(str) << endl;
    return 0;
}
