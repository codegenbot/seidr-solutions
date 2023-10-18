#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    long long n1;
    cin >> n1;
    vector<long double> vec1(n1);
    for (long long i = 0; i < n1; i++) {
        cin >> vec1[i];
    }
    long long n2;
    cin >> n2;
    vector<long double> vec2(n2);
    for (long long i = 0; i < n2; i++) {
        cin >> vec2[i];
    }
    long double ret = 0.0;
    for (long long i = 0; i < n1; i++) {
        ret += pow((vec1[i] - vec2[i]), 2);
    }
    ret = sqrt(ret);
    printf("%.15lf\n", ret);
    return 0;
}
