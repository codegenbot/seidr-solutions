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
    size_t n;
    std::cin >> n;

    std::vector<double> vector1;
    vector1.reserve(n);
    for (size_t i = 0; i < n; i++) {
        double num;
        std::cin >> num;
        vector1.push_back(num);
    }

    std::cin >> n;

    std::vector<double> vector2;
    vector2.reserve(n);
    for (size_t i = 0; i < n; i++) {
        double num;
        std::cin >> num;
        vector2.push_back(num);
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    std::cout.precision(15);
    std::cout << std::fixed << distance << std::endl;

    return 0;
}