```cpp
#include <stdexcept>
#include <vector>
#include <cmath>

double calculateVectorDistance(std::vector<float> v1, std::vector<float> v2) {
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

int main() {
    // Test the function
    std::vector<float> v1 = {1.0, 2.0, 3.0};
    std::vector<float> v2 = {4.0, 5.0, 6.0};
    
    double distance = calculateVectorDistance(v1, v2);
    
    return 0;
}