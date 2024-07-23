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

    vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }

    double result = sqrt(sum);
    cout << fixed << result << "\n";

    return 0;
}