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

a
b
a
output:

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
    string a,b,c;
    cin>>a>>b>>c;
    map<char,char> ma;
    for(int i=0;i<a.length();i++){
        ma[a[i]]=b[i];
    }
    string res;
    for(int i=0;i<c.length();i++){
        res+=ma[c[i]];
    }
    cout<<res<<endl;
}
