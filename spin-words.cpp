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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
int main() {
#define LOCAL
#ifdef LOCAL
freopen("data.in", "r", stdin);
freopen("data.out", "w", stdout);
#endif
string str;
while(getline(cin, str)){
int l=0, r=0;
while(r < str.size()){
if(str[r] == ' '){
while(l <= r) cout << str[r--];
cout << str[r] << ' ';
l = r+1;
r = l;
}
else if(r == str.size() -1){
l = r ;
while(l <= r) cout << str[l--];
l = r+1;
r = l;
}
else {
r++;
}
}
cout << endl;
}
return 0;
}
