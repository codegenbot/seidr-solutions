#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double vec1[n];
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }
    cin >> n;
    double vec2[n];
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }
    double ret = 0.0;
    for (int i = 0; i < n; i++) {
        ret += pow((vec1[i] - vec2[i]), 2);
    }
    ret = sqrt(ret);
    printf("%.15f", ret);
    return 0;
}
