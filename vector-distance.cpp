#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

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

    double sum = 0.0;
    for (size_t i = 0; i < std::min(n, m); ++i) {
        double diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }

    double result = std::sqrt(sum);
    std::cout << std::fixed << result << std::endl;

    return 0;
}