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
Given a string of one or more words (separated by spaces), reverse all of the words that are five or more letters long and return the resulting string.
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
void reverse(char *str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    int start = 0;
    int cur = 0;
    int len = strlen(str);
    while (cur < len) {
        if (str[cur] == ' ') {
            if (cur - start >= 5) {
                reverse(str, start, cur - 1);
            }
            start = cur + 1;
        }
        cur++;
    }
    if (cur - start >= 5) {
        reverse(str, start, cur - 1);
    }
}

int main() {
    char str[100];
    while (cin.getline(str, 100)) {
        reverseWords(str);
        cout << str << endl;
    }
    return 0;
}
