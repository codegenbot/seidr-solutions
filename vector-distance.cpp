#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
        v1[i] = max(0.0, min(1.0, v1[i])); // Ensure the value is in [0, 1]
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<double> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
        v2[i] = max(0.0, min(1.0, v2[i])); // Ensure the value is in [0, 1]
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }

    cout << sqrt(sum) << endl;

    return 0;
}