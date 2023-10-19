#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> n;
    double b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    double ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (a[i] - b[i]) * (a[i] - b[i]);
    }
    cout << sqrt(ans) << endl;
    return 0;
}
