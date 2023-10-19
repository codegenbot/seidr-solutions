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
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    for (int i = 0; i < c.size(); i++) {
        int j;
        for (j = 0; j < a.size(); j++) {
            if (c[i] == a[j]) {
                c[i] = b[j];
                break;
            }
        }
        if (j == a.size()){
            cout << c[i];
        }
    }
    cout << c;
    return 0;
}
