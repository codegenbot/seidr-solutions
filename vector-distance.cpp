#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> vec1(n);
    vector<double> vec2(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    double result = sqrt(inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0.0, plus<double>(), [](double a, double b) { return pow(a - b, 2); }));
    cout << fixed << setprecision(14) << result << "\n";

    return 0;
}