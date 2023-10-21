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
QQ
output:
QQ
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
string mid(string s) {
    if(s.size() % 2 == 1) {
        return s.substr(s.size() / 2, 1);
    } else {
        return s.substr(s.size() / 2 - 1, 2);
    }
}
int main() {
    string s;
    while(cin >> s) {
        cout << mid(s) << endl;
    }
    return 0;
}
