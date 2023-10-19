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
f
output:
f
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

string GetMiddleChar(string chars) {
    int size = chars.size();
    if(size % 2)
        return chars.substr(size / 2, 1);
    else
        return chars.substr(size / 2 - 1, 2);
}

int main() {
