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

string reverseString(string str) {
    int i = 0, j = str.length()-1;
    while(i < j) {
        swap(str[i++], str[j--]);
    }
    return str;
}

string reverseWords(string str) {
    int i = 0, j = 0;
    vector<int> posOfSpace;
    while(i < str.length()) {
        if(str[i] == ' ') {
            posOfSpace.push_back(i);
            i++;
            j = i;
        } else if(i == str.length() - 1) {
            if(i-j >= 5) {
                str = str.substr(0, j) + reverseString(str.substr(j, i - j + 1));
            }
            j = i;
            break;
        } else {
            i++;
        }
    }
    posOfSpace.push_back(i);
    for(int i = 0; i < posOfSpace.size() - 1; i++) {
        str += ' ';
    }
    return str;
}

int main() {
    string str = "This is a test";
    cout << reverseWords(str) << endl;
    return 0;
}
