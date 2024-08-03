#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0;
    for (size_t i = 0; i < vec1.size(); i++) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sum);
}