#include <vector>
#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

double vectorDistance(const vector<double>& v1, const vector<double>& v2) {
    return sqrt(std::accumulate(v1.begin(), v1.end(),
        0.0) + std::accumulate(v2.begin(), v2.end(), 0.0,
        [&](double a, double b){ return a + pow(b - v2[0], 2); }));
}

int main() {
    int n;
    cin >> n;
    vector<double> x1(n), x2(n);
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    cout << fixed << setprecision(10) << vectorDistance(x1, x2) << endl;
}