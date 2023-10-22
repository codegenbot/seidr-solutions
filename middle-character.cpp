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
string mid(string str){
    string res;
    int len = str.size();
    if(len % 2 == 0){
        res += str[len/2-1];
        res += str[len/2];
    }else{
        res += str[len/2];
    }
    return res;
}
int main() {
    cout<<mid("Q")<<endl;
    cout<<mid("")<<endl;
    cout<<mid("$")<<endl;
    cout<<mid("E9")<<endl;
    cout<<mid(")b")<<endl;
    return 0;
}
