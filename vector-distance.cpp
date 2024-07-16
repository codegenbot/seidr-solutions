#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += std::pow(v2[i] - v1[i], 2);
    }
    return std::sqrt(sum);
}