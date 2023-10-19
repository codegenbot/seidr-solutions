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

map
wxy
world
output:

input:
a
a
a
aaa
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
int
char
float
e
l
eeeeeeeeee
output:
llllllllll
*/
int main() {
    string one, two, three;
    getline(cin, one);
    getline(cin, two);
    getline(cin, three);
    map<char, char> dict;
    for(int i=0; i<one.size(); i++){
        dict[one[i]] = two[i];
    }
    string res = "";
    for(int i=0; i<three.size(); i++){
        res += dict[three[i]];
    }
    cout << res << endl;
}
