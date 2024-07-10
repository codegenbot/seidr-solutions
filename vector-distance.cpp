```
#include <vector>
#include <cmath>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size()) {
        throw std::runtime_error("Vectors of different sizes");
    }
    
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v1[i] - v2[i];
        sum += static_cast<double>(diff) * static_cast<double>(diff);
    }
    return sqrt(sum);
}