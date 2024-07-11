#include <iostream>
#include <vector>
#include <cmath>

int main() {
    size_t n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    size_t m;
    std::cin >> m;
    std::vector<double> vec2(m);
    for (size_t i = 0; i < m; ++i) {
        std::cin >> vec2[i];
    }

    if (n != m) {
        std::cout << "Error: Vectors must have the same dimensions." << std::endl;
        return 0;
    }

    double sum = 0.0;
    for (size_t i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    double result = std::sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}