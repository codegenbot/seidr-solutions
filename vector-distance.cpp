#include <vector>
#include <iostream>
#include <cmath>

float euclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    float distance = 0.0;
    for (size_t i = 0; i < vector1.size(); i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    size_t n;
    std::cin >> n;
    std::vector<float> vector1(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }
    std::vector<float> vector2(vector1.size());
    for (size_t i = 0; i < vector1.size(); i++) {
        std::cin >> vector2[i];
    }
    float distance = euclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;
    return 0;
}