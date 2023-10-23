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

This looks very easy. Using greedy method, we could split words using space as the delimiter and then check if we should reverse the word. However, there is a case that we might missed, which is [space]    [     space]. Since we split the string by space, it is like we skipped “word” and we find "”. Therefore, we wil reverse this word even when it is super small. To handle this issue, we should handle space correctly so that these dirty spaces could be skipped. We could force if to skip the second space when first space is encountered.
*/
int main() {
    string s;
    string res;
    getline(cin, s);
    int n = s.size();
    int start = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            if (i - start >= 5) {
                for (int j = i - 1; j >= start; j--) {
                    res += s[j];
                }
            } else {
                res += s.substr(start, i - start);
            }
            res += ' ';
            start = i + 1;
        }
    }
    if (n - start >= 5) {
        for (int j = n - 1; j >= start; j--) {
            res += s[j];
        }
    } else {
        res += s.substr(start, n - start);
    }
    cout << res << endl;
    return 0;
}
