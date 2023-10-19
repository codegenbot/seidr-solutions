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

*/
int main() {
    int n;
    cin >> n;
    double *arr1 = new double[n];
    double *arr2 = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    double sum = 0;
    double maxNum = 0;
    for (int i = 0; i < n; i++) {
        sum += (arr1[i] - arr2[i]) * (arr1[i] - arr2[i]);
    }
    printf("%.16lf", sqrt(sum));
    return 0;
}
