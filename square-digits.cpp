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
Given a positive integer, square each digit and concatenate the squares into a returned string.
For example,
input:
0
output:
0
input:
1
output:
1
input:
2
output:
4
input:
3
output:
9
input:
4
output:
16
*/
string square_digits(int num) {
    string ret;
    while(num > 0) {
        int tmp = num % 10;
        ret += to_string(tmp * tmp);
        num /= 10;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}
int main() {
    cout << square_digits(9119) << endl;
    return 0;
}
