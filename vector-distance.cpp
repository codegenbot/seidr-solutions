#include <vector>
#include <cmath>
#include <iostream>

double calculateDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sum = 0.0;
    for (int i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sum);
}