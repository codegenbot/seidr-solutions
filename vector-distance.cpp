#include <cmath>
#include <cstdio>
#include <vector> 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    float ans = 0.0;
    for (int i = 0; i < n; i++) {
        ans += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    cout << sqrt(ans) << endl;
    return 0;
}
