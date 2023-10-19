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
int main() {
    int num;
    cin >> num;
    string res = "";
    while(num){
        int temp = num % 10;
        res = to_string(temp * temp) + res;
        num /= 10;
    }
    cout << res;
    return 0;
}
