#include <cmath>
#include <vector>

double calculateDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double distance = 0.0;
    for (int i = 0; i < vector1.size(); ++i) {
        float diff = (vector1[i] - vector2[i]) * (vector1[i] - vector2[i]);
        distance += diff;
    }
    return std::sqrt(distance);
}