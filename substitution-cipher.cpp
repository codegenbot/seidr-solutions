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
