#include <cmath>
#include <vector>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    int n = v1.size();
    for (int i = 0; i < n; ++i) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    return std::sqrt(sum);
}