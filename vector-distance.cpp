#include <cmath>
#include <cstdio>
#include <vector> 
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += (long long)(v1[i] - v2[i]) * (long long)(v1[i] - v2[i]);
    }
    printf("%.15lf\n", sqrt(res));
    return 0;
}
