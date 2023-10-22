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
    while(i < j) {
        swap(s[i++], s[j--]);
    }
}

string reverseString(string s) {
    string res = "";
    int i = 0, j = 0;
    while(j < s.size()) {
        if(s[j] == ' ') {
            if(j - i >= 5) {
                reverseWord(s, i, j - 1);
            }
            res += s.substr(i, j - i) + " ";
            i = j + 1;
        }
        j++;
    }
    if(j - i >= 5) {
        reverseWord(s, i, j - 1);
    }
    res += s.substr(i, j - i);
    return res;
}

int main() {
    string s;
    while(cin >> s) {
        cout << reverseString(s) << endl;
    }
    return 0;
}
