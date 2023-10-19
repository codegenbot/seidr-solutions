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
    string str1 , str2 , third_str;
    cin >> str1 >> str2 >> third_str;
    map<char,char> mp_str1;
    mp_str1.insert(make_pair(str1[0],str2[0]));
    for(int i = 1 ; i < str1.length() ; i++){
        if(!mp_str1[str1[i]]){
            mp_str1[str1[i]] = str2[i];
        }
    }
    for(int i = 0 ; i < third_str.length() ; i++){
        third_str[i] = mp_str1[third_str[i]];
    }
    cout << third_str << endl;
    return 0;
}
