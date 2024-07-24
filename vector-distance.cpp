```cpp
#include <cmath>
#include <vector>

float calculateEuclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    int n = static_cast<int>(v1.size());  
    float sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        float diff = pow((v1[i] - v2[i]), 2);
        sumOfSquares += diff;
    }
    return sqrt(sumOfSquares);
}