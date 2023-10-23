/*
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
 
output:
 
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
*/
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

string center(string str) {
    int len = str.size();
    if (len == 1) {
        return str;
    }
    if (len % 2 == 0) {
        return str.substr(len / 2 - 1, 2);
    }
    return string(1, str[len / 2]);
}
int main() {
    freopen("input.txt", "r", stdin);
    string input;
    while (cin >> input) {
        cout << center(input) << endl;
    }
    return 0;
}
