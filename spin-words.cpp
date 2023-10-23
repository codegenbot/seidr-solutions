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

string reverseWord(string s) {
    int i = 0;
    int j = s.size() - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}

string reverseString(string s) {
    string res;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == ' ') {
            res += s[i];
            i++;
        }
        int j = i;
        while (j < s.size() && s[j] != ' ') {
            j++;
        }
        if (j - i >= 5) {
            string tmp = s.substr(i, j - i);
            res += reverseWord(tmp);
        }
        else {
            res += s.substr(i, j - i);
        }
        i = j;
    }
    return res;
}

int main() {
