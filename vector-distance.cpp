#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double distance = 0.0;
    for (int i = 0; i < vector1.size(); ++i) {
        float diff = vector1[i] - vector2[i];
        distance = 0.0 + (diff * diff);
    }
    return std::sqrt(distance);
}

int main() {
    int n;
    std::vector<float> vec1, vec2;

    // Read input
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        float val;
        std::cin >> val;
        vec1.push_back(val);
    }
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        float val;
        std::cin >> val;
        vec2.push_back(val);
    }

    // Calculate and print distance
    double distance = calculateDistance(vec1, vec2);
    std::cout << distance << std::endl;

    return 0;
}