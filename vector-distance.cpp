#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += std::pow((vec1[i] - vec2[i]), 2);
    }
    return std::sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<float> vec1(n);
    std::vector<float> vec2(n);

    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double distance = calculateEuclideanDistance(vec1, vec2);

    std::cout << "Euclidean Distance: " << std::fixed << distance << std::endl;

    return 0;
}