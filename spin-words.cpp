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

Example:

"This is an example!" ==> "This is an !elpmaxe"
"This is an example!" ==> "This is an !elpmaxe"
"double  spaces"      ==> "double  secaps"
"double  spaces"      ==> "double  secaps"
*/
void reverse(string& s, int start, int end) {
    while (start < end) {
        swap(s[start++], s[end--]);
    }
}
string reverseWords(string s) {
    int start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (i - start >= 5) {
                reverse(s, start, i - 1);
            }
            start = i + 1;
        }
    }
    if (s.size() - start >= 5) {
        reverse(s, start, s.size() - 1);
    }
    return s;
}
int main() {
    string s = "this is a test";
    cout << reverseWords(s);
}
