#include <iostream>
#include <vector>
#include <cmath>

int main() {
    size_t n;
    std::cin >> n;
    std::vector<double> vec1(n), vec2(n);

    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double sum = 0.0;
    for (size_t i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    std::cout << std::sqrt(sum) << std::endl;

    return 0;
}