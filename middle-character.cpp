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


string middle(string s)
{
    int n = s.size();
    if(n&1)
        return s.substr(n/2, 1);
    else
        return s.substr(n/2-1, 2);
}

int main() {
    cout << middle("Q") << endl;
    cout << middle("E9") << endl;
    cout << middle(")b") << endl;
    return 0;
}
