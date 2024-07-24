```cpp
float calculateEuclideanDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != n || v2.size() != n) {
        throw std::runtime_error("Vectors must have the same size.");
    }
    float sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        float diff = pow((v1[i] - v2[i]), 2);
        sumOfSquares += diff;
    }
    return sqrt(sumOfSquares);
}