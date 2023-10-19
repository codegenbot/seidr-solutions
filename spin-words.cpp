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
/* Time: O(n) Space: O(n)
class Solution {
private:
    bool isNum(char a) {
        string str = "0123456789";
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == a) {
                return true;
            }
        }
        return false;
    }
public:
    int myAtoi(string str) {
        int current = 0;
        bool pos = true;
        if (str.length() == 0) {
            return 0;
        }
        if (str[0] != ' ') {
            if (str[0] == '-') {
                pos = false;
            }
            if (str[0] == '-' or str[0] == '+') {
                str = str.substr(1);
            }
            
        }
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') {
                continue;
            }
            else {
                str = str.substr(i);
                break;
            }
        }
        for (int i = 0; i < str.length(); i++) {
            if (!isNum(str[i])) {
                str = str.substr(0, i);
                break;
            }
        }
        for (int i = 0; i < str.length(); i++) {
            if (!pos or ((INT_MAX / 10) < current or (((INT_MAX / 10) == current) and (str[i] - '0') > (INT_MAX % 10)))) {
                return INT_MAX;
            }
            if (!pos or ((current * 10  + (str[i] - '0')) < current)) {
                return INT_MIN;
            }
            current = current * 10 + (str[i] - '0');
        }
        
        if (pos) {
            return current;
        }
        else {
            return current * -1;
        }
        
    }
};
*/

/*class Solution {
public:
    bool isMatch(string s, string p) {
        if (p.empty()) {
            return s.empty();
        }
        
        bool initialMatch = (!s.empty() && (s[0] == p[0] || p[0] == '.'));
        
        if (p.length() >= 2 && p[1] == '*') {
            //if the second char in p is *
            //either the second two char not match or not match the intial one
            return isMatch(s, p.substr(2)) || (initialMatch && isMatch(s.substr(1), p));
        }
        else {
            // just remove the head of s and p
            return initialMatch && isMatch(s.substr(1), p.substr(1));
        }
    }
};*/
class Solution {
private:
    bool isNum(char a) {
        string str = "0123456789";
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == a) {
                return true;
            }
        }
        return false;
    }
public:
    int myAtoi(string str) {
        if (str.length() == 0) {
            return 0;
        }        
        bool pos = true;
        
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') {
                continue;
            }
            else {
                if (str[i] == '-') {
                    pos = false;
                }
                if (str[i] == '-' or str[i] == '+') {
                    str = str.substr(i + 1);
                } else {
                    str = str.substr(i);
                }
                break;
            }
        }
        for (int i = 0; i < str.length(); i++) {
            if (!isNum(str[i])) {
                str = str.substr(0, i);
                break;
            }
        }
        int current;
        int base = 1;
        for (int i = 0; i < str.length(); i++) {
            if (!pos or (((INT_MAX - (str[i] - '0')) / 10.) < current)) {
                return INT_MAX;
            }
            if (!pos or (current > ((current * 1000  + (str[i] - '0')) / 10.))) {
                return INT_MIN;
            }
            current = current * 10 + (str[i] - '0');
        }
        
        if (pos) {
            return current;
        }
        else {
            return current * -1;
        }
        
    }
};
int main() {
    Solution solution;
    cout << solution.myAtoi("-09")<< endl;
    return 0;
}
