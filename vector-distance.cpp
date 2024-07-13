#include <iostream>
#include <cmath>
#include <vector>

double calculateDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0;
    for (size_t i = 0; i < v1.size(); ++i) {
        sum += std::pow(v1[i] - v2[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> v1(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> v1[i];
    }

    std::vector<double> v2(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> v2[i];
    }

    std::cout << calculateDistance(v1, v2) << std::endl;
    return 0;
}