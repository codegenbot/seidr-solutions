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
Given a string, return the middle character as a string if it is odd length;
return the two middle characters as a string if it is even length
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
    getline(cin,str);
    int len = str.length();
    if(len%2==1){
        cout<<str[len/2];
    }else{
        cout<<str[len/2-1]<<str[len/2];
    }
}
