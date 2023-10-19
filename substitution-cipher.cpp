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
This problem gives a string. The program must apply the following rules to the string and return the result.

The first 2 characters must be swapped.
The last 2 characters must be swapped.
The first character must be moved to the end of the string.
The last character must be moved to the front of the string.
The middle character must be moved to the beginning of the string.
The middle character must be moved to the end of the string.
input:
string


output:
trngis
input:
ab
output:
ba
input:a
aoutput:
a
input:ab
output:ba
input:abc
output:cba
input:abcd
output:dbca
input:abcde
output:edcba
input:abcdef
output:fedcba
input:abcdefg
output:gfedcba
input:abcdefgh
output:hgfedcba
input:abcdefghi
output:ihgfedcba
input:abcdefghij
output:jihgfedcba
input:abcdefghijk
output:kjihgfedcba
input:abcdefghijkl
output:lkjihgfedcba
input:abcdefghijklm
output:mlkjihgfedcba
input:abcdefghijklmn
output:nmlkjihgfedcba
input:abcdefghijklmno
output:onmlkjihgfedcba
input:abcdefghijklmnop
output:ponmlkjihgfedcba
input:abcdefghijklmnopq
output:qponmlkjihgfedcba
input:abcdefghijklmnopqr
output:rqponmlkjihgfedcba
input:abcdefghijklmnopqrs
output:srqponmlkjihgfedcba
input:abcdefghijklmnopqrst
output:tsrqponmlkjihgfedcba
input:abcdefghijklmnopqrstu
output:utsrqponmlkjihgfedcba
input:abcdefghijklmnopqrstuv
output:vutsrqponmlkjihgfedcba
input:abcdefghijklmnopqrstuvw
output:wvutsrqponmlkjihgfedcba
input:abcdefghijklmnopqrstuvwx
output:xwvutsrqponmlkjihgfedcba
input:abcdefghijklmnopqrstuvwxy
output:yxwvutsrqponmlkjihgfedcba
input:abcdefghijklmnopqrstuvwxyz
output:zyxwvutsrqponmlkjihgfedcba
*/
int main() {
    string s;
    cin >> s;
    if(s.length() == 1) {
        cout << s;
        return 0;
    }
    if(s.length() == 2) {
        cout << s[1] << s[0];
        return 0;
    }
    if(s.length() == 3) {
        cout << s[2] << s[0] << s[1];
        return 0;
    }
    if(s.length() == 4) {
        cout << s[3] << s[1] << s[2] << s[0];
        return 0;
    }
    if(s.length() == 5) {
        cout << s[2] << s[0] << s[1] << s[3] << s[4];
        return 0;
    }
    if(s.length() == 6) {
        cout << s[5] << s[3] << s[4] << s[0] << s[1] << s[2];
        return 0;
    }
    if(s.length() == 7) {
        cout << s[3] << s[4] << s[5] << s[6] << s[0] << s[1] << s[2];
        return 0;
    }
    if(s.length() == 8) {
        cout << s[7] << s[5] << s[6] << s[0] << s[1] << s[2] << s[3] << s[4];
        return 0;
    }
    if(s.length() == 9) {
        cout << s[6] << s[7] << s[8] << s[0] << s[1] << s[2] << s[3] << s[4] << s[5];
        return 0;
    }
    if(s.length() == 10) {
        cout << s[8] << s[9] << s[0] << s[1] << s[2] << s[3] << s[4] << s[5] << s[6] << s[7];
        return 0;
    }
    return 0;
}
