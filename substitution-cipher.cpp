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
ab

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
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    map<char, char> mp;
    for (int i = 0; i < str1.size(); i++) {
        mp[str1[i]] = str2[i];
    }
    
    for (int i = 0; i < str3.size(); i++) {
        if (mp.count(str3[i])) {
            str3[i] = mp[str3[i]];
        }
    }
    cout << str3 << endl;
    return 0;
}
