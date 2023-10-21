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

string reverse_word(string str) {
    int len = str.size();
    string res = "";
    for (int i = len - 1; i >= 0; i--) {
        res += str[i];
    }
    return res;
}

string reverse_string(string str) {
    string res = "";
    string temp = "";
    int len = str.size();
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            res += temp;
            res += ' ';
            temp = "";
        } else {
            temp += str[i];
        }
    }
    res += temp;
    return res;
}

int main() {
    string str;
    getline(cin, str);
    string res = "";
    string temp = "";
    int len = str.size();
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            if (temp.size() >= 5) {
                temp = reverse_word(temp);
            }
            res += temp;
            res += ' ';
            temp = "";
        } else {
            temp += str[i];
        }
    }
    if (temp.size() >= 5) {
        temp = reverse_word(temp);
    }
    res += temp;
    cout << res << endl;
    return 0;
}
