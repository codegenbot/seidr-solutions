#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
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

int g_n = 0;
double g_vec1[100];
int g_m = 0;
double g_vec2[100];

void get_input() {
    char buf[1024];
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';
    g_n = atoi(buf);
    for (int i = 0; i < g_n; i++) {
        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf) - 1] = '\0';
        g_vec1[i] = atof(buf);
    }
    scanf("%d", &g_m);
    for (int i = 0; i < g_m; i++) {
        scanf("%lf", &g_vec2[i]);
    }
}

double get_result() {
    double ret = 0.0, tmp;
    for (int i = 0; i < g_n; i++) {
        tmp = g_vec1[i] - g_vec2[i];
        ret += tmp * tmp;
    }
    ret = sqrt(ret);
    return ret;
}

void print_result(double result) {
    printf("%.15f\n", result);
}

int main() {
    get_input();
    double result = get_result();
    print_result(result);
    return 0;
}
