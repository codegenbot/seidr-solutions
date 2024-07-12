#include <cmath>
#include <vector>

double calculateEuclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    size_t i;
    for (i = 0; i < vec1.size(); ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sum);
}