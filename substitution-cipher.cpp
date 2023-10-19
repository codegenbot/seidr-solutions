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


// 1. use map
// 2. use array

int main() {
    string a, b, c;
    cout << "input three strings seperated by blank" << endl;
    cin.ignore(100,'\n');
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    string res = "";
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (c[i] == a[j]) {
                res += b[j];
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}
