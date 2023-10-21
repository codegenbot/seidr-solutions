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
This problem asks you to write a program that will take a string of letters and a number of columns and write the string in a zig-zag pattern given that number of columns. Then read the message row-wise.
For example, given the string "PAYPALISHIRING" and a number of columns 3, you would write out:
P   A   H   N
A P L S I I G
Y   I   R
And then read: "PAHNAPLSIIGYIR"
input: PAHNAPLSIIGYIR
output: 3
input: GEEKSFORGEEKS
output: 3
input: GEEKSQUIZ
output: 4
*/
int main() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    map<char,char>mp;
    for(int i=0;i<s1.size();i++){
        mp[s1[i]]=s2[i];
    }
    for(int i=0;i<s3.size();i++){
        cout<<mp[s3[i]];
    }
    return 0;
}
