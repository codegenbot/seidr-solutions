#include <iostream>
#include <vector>
#include <cmath>

float calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    float sum = 0;
    for (int i = 0; i < vector1.size(); i++) {
        sum += std::pow(std::abs(vector1[i] - vector2[i]), 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vector1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cin >> n;

    std::vector<float> vector2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    float distance = calculateEuclideanDistance(vector1, vector2);
    std::cout.precision(15);
    std::cout << distance << std::endl;

    return 0;
}