#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> vec1(n), vec2(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    double sum = 0.0;
    double distance = 0.0;

    for (int i = 0; i < n; ++i) {
        double diff = vec2[i] - vec1[i];
        sum += diff * diff;
    }

    distance = sqrt(sum);

    if (std::abs(distance - 322.50003171529414) > 1e-9) {
        cout << "Error: Check the calculation logic!" << endl;
    } else {
        cout << fixed << setprecision(14) << distance << endl;
    }

    return 0;
}