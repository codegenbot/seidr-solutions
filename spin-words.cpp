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
    // your code goes here
    string s;
    getline(cin, s);
    string s1 = "";
    string str = "";
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            if (str.size() >= 5) {
                reverse(str.begin(), str.end());
                s1 += str;
            } else {
                s1 += str;
            }
            s1 += " ";
            str = "";
        } else {
            str += s[i];
        }
    }
    
    if (str.size() >= 5) {
        reverse(str.begin(), str.end());
        s1 += str;
    } else {
        s1 += str;
    }
    
    cout << s1 << endl;
    return 0;
}
