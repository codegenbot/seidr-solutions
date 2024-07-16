#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sumSq = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sumSq += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sumSq);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    std::vector<float> vec2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double distance = calculateDistance(vec1, vec2);

    std::cout << distance << std::endl;

    return 0;
}