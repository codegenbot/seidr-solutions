```cpp
#include <cmath>
#include <vector>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size()) {
        throw std::runtime_error("Vectors of different sizes");
    }
    
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}