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
This problem gives two strings. The first string represents a cipher, mapping each character in one string to the one at the same index in the other string. 
The program must apply this cipher to the second string and return the deciphered message.

For example,
input: 
abcdefghijklmnopqrstuvwxyz
zyxwvutsrqponmlkjihgfedcba
z
output:
a
input:
abcdefghijklmnopqrstuvwxyz
zyxwvutsrqponmlkjihgfedcba
abc
output:
zyx
input:
abcdefghijklmnopqrstuvwxyz
zyxwvutsrqponmlkjihgfedcba
abcdefghijklmnopqrstuvwxyz
output:
zyxwvutsrqponmlkjihgfedcba
*/
int main() {
    string a, b, c;
    cin >> a >> b >> c;
    for(int i=0; i<c.length(); i++) {
        //cout << c[i] << endl;
        int pos = a.find(c[i]);
        if(pos != string::npos) {
            c[i] = b[pos];
        }
    }
    cout << c << endl;
    return 0;
}
