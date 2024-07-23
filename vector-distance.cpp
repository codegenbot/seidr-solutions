#include <iostream>
#include <vector>
#include <cmath>

double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    if (v1.size() != v2.size()) {
        throw std::runtime_error("Vectors must be the same size");
    }
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow((v2[i] - v1[i]), 2);
    }
    
    return sqrt(2 * sum);
}

int main() {
    std::vector<float> v1;
    v1.push_back(1.0f); v1.push_back(2.0f);
    std::vector<float> v2;
    v2.push_back(3.0f); v2.push_back(4.0f);
    double distance = vectorDistance(v1, v2);
    printf("Euclidean distance: %f\n", distance);
    return 0;
}