#include <iostream>
#include <vector>
#include <cmath>

float euclideanDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    float sum = 0.0f;
    for (int i = 0; i < vec1.size(); ++i) {
        float diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }
    return std::sqrtf(sum);
}

int main() {
    float n;
    std::cin >> n;

    std::vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::cin >> n;

    std::vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    float distance = euclideanDistance(vec1, vec2);
    std::cout << distance << std::endl;

    return 0;
}