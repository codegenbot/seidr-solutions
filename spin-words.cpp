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
string reverseWords(string str) {
    int len = str.length();
    string res;
    if (len == 0) return res;
    int start = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            int size = i - start;
            if (size >= 5) {
                int j = start;
                while (j < i) {
                    res.push_back(str[j++]);
                }
            } else {
                while (start < i) {
                    res.push_back(str[start++]);
                }
            }
            res.push_back(' ');
            start = i + 1;
        }
    }
    int size = len - start;
    if (size >= 5) {
        int j = start;
        while (j < len) {
            res.push_back(str[j++]);
        }
    } else {
        while (start < len) {
            res.push_back(str[start++]);
        }
    }
    return res;
}

string reverseString(string str) {
    int len = str.length();
    string res;
    if (len == 0) return res;
    int start = 0, end = len - 1;
    while (start < end) {
        swap(str[start++], str[end--]);
    }
    return str;
}

int main() {
    cout << reverseWords("this is a test") << endl;
    cout << reverseWords("this is another test") << endl;
    cout << reverseString("hello world") << endl;
    cout << reverseString("1234567") << endl;
    
    return 0;
}
