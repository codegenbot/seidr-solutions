#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    std::cout << calculateDistance(vec1, vec2) << std::endl;

    return 0;
}