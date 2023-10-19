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
    string s = "";
    int T;
    cin >> T;
    getline(cin, s);
    while(T--) {
        getline(cin, s);
        string t(1, s[0]);
        for(int i=1; i<s.length(); i++) {
            t.push_back(' ');
            t.push_back(s[i]);
        }
        int p = -1, q = -1;
        while(q != t.length()) {
            p = q + 1;
            q = t.find(' ', q + 1);
            int l = q - p;
            if(l >= 5) {
                reverse(t.begin() + p, t.begin() + p + l);
            }
        }
        for(int i=0; i<t.length(); i++) {
            if(t[i] == ' ')
                continue;
            cout << t[i];
        }
        cout << '\n';
    }
    return 0;
}
