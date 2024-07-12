#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        double diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}