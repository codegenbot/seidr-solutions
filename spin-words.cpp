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

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(char *a) {
    int i = 0, j = strlen(a) - 1;
    while (i < j) {
        swap(&a[i++], &a[j--]);
    }
}

void reverseWords(char *a) {
    char *temp = a;
    while (*temp) {
        int count = 0;
        while (*temp && *temp != ' ') {
            temp++;
            count++;
        }
        if (count >= 5) {
            char *end = temp - 1;
            char *start = end - count + 1;
            while (start < end) {
                swap(start, end);
                start++;
                end--;
            }
        }
        if (*temp) {
            temp++;
        }
    }
}

int main() {
    char a[100];
    gets(a);
    reverseWords(a);
    cout << a << endl;
}
