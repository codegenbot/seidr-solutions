#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    int n;
    cin >> n; // Add "int n;" before this line
    vector<double> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(v1[i] - v2[i], 2);
    }

    std::cout << std::sqrt(sum) << "\n";

    return 0;
}