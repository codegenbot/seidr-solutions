#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <bitset>
#include <iomanip>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
The first n integers encodes the message and the n+1th integer is the length
of the key (L).



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
        for (int j = 0; j < a.size(); j++) {
            if (c[i] == a[j]) {
                c[i] = b[j];
                break;
            }
        }
    }
    cout << c;
    return 0;
}
