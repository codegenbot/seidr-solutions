#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

float euclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    float sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        float diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
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
    std::cout << std::fixed << std::setprecision(14) << distance << std::endl;

    return 0;
}