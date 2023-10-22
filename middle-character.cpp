#include <vector>
#include <iostream>
#include <cmath>
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
string middle(string input){
    int len = input.size();
    if(len&1 ^ 1)
        return input.substr(len/2,1);
    else
        return input.substr(len/2-1,2);
}
int main() {
