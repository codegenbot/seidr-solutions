#include <vector>
#include <cmath>

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

int main() {
    std::vector<float> v1 = std::vector<float>( {1.0f, 2.0f, 3.0f} );
    std::vector<float> v2 = std::vector<float>( {4.0f, 5.0f, 6.0f} );
    
    double distance = vectorDistance(v1, v2);
    
    return 0;
}