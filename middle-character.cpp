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
#include <functional>
#include <algorithm>
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
int main() {
    string str;
    getline(cin, str);
    int sz = str.size();
    int mid = sz / 2;
    if (sz % 2 == 0) {
        cout << str[mid-1] << str[mid];
    }
    else {
        cout << str[mid];
    }
    return 0;
}
