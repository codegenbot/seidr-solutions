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
    string str = "this is a test";
    int pos = 0;
    while (pos < str.length()) {
        int end = str.find(' ', pos);
        if (end == string::npos) {
            end = str.length();
        }
        if (end - pos >= 5) {
            reverse(str.begin() + pos, str.begin() + end);
        }
        pos = end + 1;
    }
    cout << str << endl;
    return 0;
}
