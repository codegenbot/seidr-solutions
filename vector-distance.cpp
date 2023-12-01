#include <vector>
#include <iostream>
#include <cmath>

float euclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    float distance = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        float diff = vector1[i] - vector2[i];
        distance += diff * diff;
    }
    return std::sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> vector1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }
    std::cin >> n;
    std::vector<float> vector2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }
    float distance = euclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;
    return 0;
}