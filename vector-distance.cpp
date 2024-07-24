#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> v1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i];
    }

    std::vector<double> v2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v2[i];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }

    std::cout << std::sqrt(sum) << std::endl;

    return 0;
}