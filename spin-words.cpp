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
    int i = 0;
    int j = 0;
    int len = str.size();
    while (j < len) {
        while (j < len && str[j] != ' ') {
            j++;
        }
        if (j - i >= 5) {
            reverse(str.begin() + i, str.begin() + j);
        }
        i = ++j;
    }
    return str;
}

int main() {
    cout << reverseWords("this is a test") << endl;
    cout << reverseWords("this is another test") << endl;
    cout << reverseWords("hi") << endl;
    cout << reverseWords("a") << endl;
    return 0;
}
