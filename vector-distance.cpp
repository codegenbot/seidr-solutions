#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }
    return std::sqrt(std::abs(sum));
}