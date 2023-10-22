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
    int size = s.size();
    int index = 0;
    int count = 0;
    while (index < size) {
        int i = index;
        int j = index;
        while (s[i] != ' ' && i < size) {
            i++;
        }
        if (i - j >= 5) {
            int k = j;
            while (k < j + (i - j) / 2) {
                char temp = s[k];
                s[k] = s[j + i - k - 1];
                s[j + i - k - 1] = temp;
                k++;
            }
        }
        index = i + 1;
    }
    cout << s << endl;
}
