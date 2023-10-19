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
For this problem, there are 3 strings. The first two represent the cipher, mapping the first character in the first string to the first character in the other, and so on. The third string is a plaintext to be deciphered by the cipher.
Input
For example,
input:

output:
h
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
    cin >> a >> b >> c;
    for (int i = 0; i < c.length(); i++) {
        for (int j = 0; j < a.length(); j++) {
            if (c[i] == a[j]) {
                c[i] = b[j];
                break;
            }
        }
    }
    cout << c << endl;
    return 0;
}
