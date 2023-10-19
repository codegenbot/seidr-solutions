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
input:\n




output:\n

input:\n
a
a
a
output:\n
a
input:\n
j
h
j
output:\n
h
input:\n
a
z
a
output:\n
z
input:\n
e
l
eeeeeeeeee
output:\n
llllllllll
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
