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

void reverse(string &s, int left, int right) {
    while (left < right) {
        char c = s[left];
        s[left] = s[right];
        s[right] = c;
        left++, right--;
    }
}
void reverseWords(string &s) {
    int left = 0;
    int right = -1;
    int len = s.length();
    while (left < len) {
        if ((left == 0 && s[left] == ' ') ||
            (left > 0 && s[left] == ' ' && s[left - 1] == ' ')) {
            left++;
            continue;
        }
        if (s[left] != ' ') {
            right++;
        }
        if (right < len - 1 && s[right] == ' ' && s[right + 1] != ' ') {
            if (right - left >= 4) {
                reverse(s, left, right);
            }
            left = right + 1;
        }
        right++;
    }
    if (right - left >= 4) {
        reverse(s, left, right);
    }
    if (left > 0 && s[left] == ' ') {
        s = s.substr(++left, right - left);
    }
    if (s[s.length() - 1] == ' ') {
        s = s.substr(0, s.length() - 1);
    }
}
int main() {
    string s = "   I  am    a    boy  ";
    reverseWords(s);
    cout << s << endl;
}
