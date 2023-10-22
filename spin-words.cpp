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
    while (cin >> s) {
        string result = "";
        int i = 0;
        while (i < s.length()) {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i++];
            }
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word;
            if (i < s.length()) {
                result += s[i++];
            }
        }
        cout << result << endl;
    }
    
    return 0;
}
