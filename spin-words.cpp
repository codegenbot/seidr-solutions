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
    int arr[s.length()];
    for (int i = 0; i< s.length(); i++) {
        arr[i] = INT_MAX;
    }
    int start_word = 0;
    int index = 0;
    for (int i = 0; i< s.length() ; i++) {
        if (s[i] == ' ') {
            if (index - start_word >= 5)
            {
                int j = 0;
                for (int k = index - 1; k >= start_word; k--) {
                    arr[i - j] = k;
                    j++;
                }
            }
            start_word = i + 1;
        }
        index++;
    }
    if (index - start_word >= 5)
    {
        int j = 0;
        for (int k = index - 1; k >= start_word; k--) {
            arr[s.length() - j - 1] = k;
            j++;
        }
    }
    int count = 0;
    for (int i = 0; i< s.length(); i++) {
        if (arr[i] != INT_MAX) {
            cout << s[arr[i]];
            count++;
        } else {
            cout << s[i];
        }
    }
}
