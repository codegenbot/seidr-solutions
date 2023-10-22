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
    string s;
    getline(cin, s);
    string res = "";
    int i = 0;
    while(i < s.length()) {
        string temp = "";
        while(i < s.length() && s[i] != ' ') {
            temp += s[i];
            i++;
        }
        if(temp.length() < 5) {
            res += temp;
        } else {
            for(int j = temp.length() - 1; j >= 0; j--) {
                res += temp[j];
            }
        }
        if(i < s.length()) {
            res += ' ';
        }
        i++;
    }
    cout << res << endl;
    return 0;
}
