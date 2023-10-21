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
void reverseStr(string& str, int start, int end) {
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

string reverseWords(string str) {
    int start = 0, end = 0;
    while(start < str.size()) {
        while(end < str.size() && str[end] != ' ') {
            end++;
        }
        if(end - start >= 5) {
            reverseStr(str, start, end - 1);
        }
        start = end + 1;
        end = start;
    }
    return str;
}
int main() {
    string str = "this is a test";
    cout << reverseWords(str) << endl;
    return 0;
}
