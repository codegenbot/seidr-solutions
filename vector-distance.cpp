#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sumSq = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sumSq += std::pow(vec1[i] - vec2[i], 2.0);
    }
    return std::sqrt(sumSq);
}