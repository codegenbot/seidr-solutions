#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    int m;
    cin >> m;
    vector<double> vec2(m);
    for (int i = 0; i < m; ++i) {
        cin >> vec2[i];
    }

    double sum = 0;
    for (int i = 0; i < min(n, m); ++i) {
        sum += pow(vec1[i] - vec2[i], 2.0);
    }

    cout << fixed << sqrt(sum) << "\n";

    return 0;
}