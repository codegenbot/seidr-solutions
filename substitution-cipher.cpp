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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:

abc
def
abc
output:
def
input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
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
