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
    string str;
    getline(cin, str);
    string res = "";
    int i = 0;
    while (i < str.size()) {
        if (str[i] == ' ') {
            res += ' ';
            i++;
            continue;
        }
        int j = i;
        while (j < str.size() && str[j] != ' ') {
            j++;
        }
        if (j - i < 5) {
            res += str.substr(i, j - i);
        }
        else {
            for (int k = j - 1; k >= i; k--) {
                res += str[k];
            }
        }
        i = j;
    }
    cout << res << endl;
    return 0;
}
