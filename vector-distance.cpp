#include <vector>
#include <cmath>
#include <initializer_list>

double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    if (v1.size() != v2.size()) {
        throw std::invalid_argument("Vectors must be the same size");
    }
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        double diff = v2[i] - v1[i];
        sum += diff * diff;
    }
    
    return std::sqrt(sum);
}