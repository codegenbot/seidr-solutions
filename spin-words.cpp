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
    while (true) {
        string str;
        getline(cin, str);
        if (str == "") break;
        string res = "";
        int i = 0;
        while (i < str.length()) {
            int j = i;
            while (str[j] != ' ' && j < str.length()) j++;
            if (j - i >= 5) {
                for (int k = j - 1; k >= i; k--) {
                    res += str[k];
                }
            } else {
                for (int k = i; k < j; k++) {
                    res += str[k];
                }
            }
            if (j < str.length()) res += str[j];
            i = j + 1;
        }
        cout << res << endl;
    }
    return 0;
}
