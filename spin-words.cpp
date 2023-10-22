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
    string str;
    string line;
    while (getline(cin, line)) {
        str += line;
        if (line.length() > 0 && line.back() == '\r') str.pop_back();
        if (line.length() > 0 && line.back() == '\n') str.pop_back();
    }
    
    string ret;
    int start = 0;
    int end = 0;
    bool flag = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            flag = true;
        }
        
        if (str[i] == ' ' || i == str.length() - 1) {
            end = i - 1;
            if (end - start + 1 >= 5) {
                string tmp;
                for (int j = end; j >= start; j--) {
                    tmp += str[j];
                }
                ret += tmp;
            }
            else {
                for (int j = start; j <= end; j++) {
                    ret += str[j];
                }
            }
            if (str[i] == ' ') ret += ' ';
            start = i + 1;
        }
    }
    if (!flag) ret += str;
    cout << ret << endl;
    return 0;
}
