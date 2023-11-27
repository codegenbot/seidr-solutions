#include <vector>
#include <iostream>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;

    for (size_t i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }

    return std::sqrt(sum);
}

int main() {
    size_t n1;
    std::cin >> n1;

    std::vector<double> vector1(n1);
    for (size_t i = 0; i < n1; i++) {
        std::cin >> vector1[i];
    }

    size_t n2;
    std::cin >> n2;

    std::vector<double> vector2(n2);
    for (size_t i = 0; i < n2; i++) {
        std::cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    std::cout << distance << std::endl;

    return 0;
}