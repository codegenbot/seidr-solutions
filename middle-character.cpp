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
string given(string str) {
    int n = str.size();
    string ret;
    if (n % 2 == 1) {
        ret.push_back(str[n / 2]);
    } else {
        ret.push_back(str[n / 2 - 1]);
        ret.push_back(str[n / 2]);
    }
    return ret;
}


int main() {
    string str;
    while (cin >> str) {
        cout << given(str) << endl;
    }
    return 0;
}
