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
    int n = s.length();
    int cnt = 0;
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(s[i] != ' ') {
            cnt++;
            if(j == -1) j = i;
        }
        else {
            if(cnt >= 5) {
                reverse(s.begin()+j, s.begin()+i);
            }
            cnt = 0;
            j = -1;
        }
    }
    if(cnt >= 5) {
        reverse(s.begin()+j, s.begin()+n);
    }
    cout << s << endl;
    return 0;
}
