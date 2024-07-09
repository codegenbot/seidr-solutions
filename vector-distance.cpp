```cpp
#include <cmath>
#include <stdexcept>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size()) {
        throw std::invalid_argument("Vectors of different sizes");
    }
    
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    return std::sqrt(sum);
}