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
// input:



// output:


// input:
i
e
co!ege has a mysteeeeeeery
// output:
co!ege vas a mistery
// input:
a
j
z
this code is seceeeeeet
// output:
this code is seczzzzzz
// input:
e
e
eeeeeeeeee
// output:
eeeeeeeeee
// input:
e
i
eeeeeeeeee
// output:
iiiiiiiii
// input:
l
e
eeeeeeeeee
// output:
lll!l!l!l
// input:
e
\n
eeeeeeeeee
// output:


// input:
e
\n
eeee!eeee
hhh
*
// output:


hhh
*
*/


// 1. use map
// 2. use array

int main() {
    string a, b, c;
    cin >> a >> b >> c;
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
