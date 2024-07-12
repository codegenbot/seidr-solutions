#include <cmath>
#include <vector>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    if (vector1.size() != vector2.size()) {
        return -1;
    }

    double sum = 0.0;
    for (size_t i = 0; i < vector1.size(); i++) {
        sum += std::pow(vector1[i] - vector2[i], 2);
    }

    return std::sqrt(sum);
}