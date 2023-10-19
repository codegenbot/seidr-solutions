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
This problem gives a string and a number. The program must count the number of times the substring of length n appears in the string.
For example, input:

ababab
2
output:

3
input:

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
