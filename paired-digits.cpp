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
Given a string of digits, return the sumof the digits whose following digit is the same.
For example,
input:
99
output:
9
input:
88
output:
8
input:
77
output:
7
input:
55
output:
5
input:
44
output:
4
*/
int main() {
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size()-1; i++) {
        if(s[i] == s[i+1]) {
            sum += (s[i] - '0');
        }
    }
    cout << sum << endl;
    return 0;
}
