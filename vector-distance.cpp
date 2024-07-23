```cpp
#include <cmath>
#include <vector>

float calculateEuclideanDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    float sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        std::vector<float> v1(n, 0.0); // Initialize with n elements of default value (0)
        std::vector<float> v2(n);
        float diff = pow((v1[i] - v2[i]), 2);
        sumOfSquares += diff;
    }
    return sqrt(sumOfSquares);
}