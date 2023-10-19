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
bc
az
baz

output:
aaa
*/
int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    map<char, char> m;
    for(int i = 0; i < s1.length(); i++){
        m[s1[i]] = s2[i];
    }
    for(int i = 0; i < s3.length(); i++){
        cout << m[s3[i]];
    }
    cout << endl;
    return 0;
}
