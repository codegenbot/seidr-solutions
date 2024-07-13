#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

float calculateDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    float sum = 0.0f;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    for (int i = 0; i < n; ++i)
        std::cin >> vec1[i];

    std::vector<float> vec2(n);
    for (int i = 0; i < n; ++i)
        std::cin >> vec2[i];

    if (vec1.size() != vec2.size()) {
        std::cerr << "Error: Vectors must have the same dimension." << std::endl;
        return 1;
    }

    std::cout << std::fixed << std::setprecision(14) << calculateDistance(vec1, vec2) << std::endl;

    return 0;
}