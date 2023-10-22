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
Given two n-dimensional vectors of floats, return the Euclidean distance between the two vectors in n-dimensional space.
For example,
input:
20
-100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0
20
100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0
output:
894.4271909999159
input:
20
5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32
20
5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32
output:
0.0
input:
1
42.91283
1
-22.134
output:
65.04683
input:
10
1.5 2.87 3.3324 4.654 5.123 6.867 7.5324 8.534 9.4132 10.43
10
-1.534 -2.543 -3.423 -4.13427 -5.714 -6.713 -7.4328 -8.43 -9.73 -10.752
output:
42.309638973086265
input:
5
0.4378 0.634 0.1234 0.764 0.243
5
-0.254 -0.1223 -0.19582 -0.8971 -0.8743
output:
2.2715833329200144
*/
int main() {
    int n;
    cin >> n;
    double x[n];
    double y[n];
    double xy[n];
    double xy2 = 0;
    double x2 = 0;
    double y2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    for (int i = 0; i < n; i++) {
        xy[i] = x[i] * y[i];
    }
    double sumxy = 0;
    double sumx2 = 0;
    double sumy2 = 0;
    for (int i = 0; i < n; i++) {
        sumxy += xy[i];
    }
    for (int i = 0; i < n; i++) {
        sumx2 += x[i] * x[i];
    }
    for (int i = 0; i < n; i++) {
        sumy2 += y[i] * y[i];
    }
    double result = sqrt(sumx2 + sumy2 - 2 * sumxy);
    printf("%.16f", result);
    return 0;
}
