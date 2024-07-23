```c++
#include <vector>
#include <cmath>

float calculateEuclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    float sumOfSquares = 0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = pow((v1[i] - v2[i]), 2);
        sumOfSquares += diff;
    }
    return sqrt(sumOfSquares);
}