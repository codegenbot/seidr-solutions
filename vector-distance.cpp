#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sum);
}

int main() {
    std::vector<float> vec1(20);
    std::cout << "Enter 20 values for vector 1: ";
    for (int i = 0; i < 20; ++i) {
        float val;
        std::cin >> val;
        vec1[i] = val;
    }

    std::vector<float> vec2(20);
    std::cout << "Enter 20 values for vector 2: ";
    for (int i = 0; i < 20; ++i) {
        float val;
        std::cin >> val;
        vec2[i] = val;
    }

    std::cout << std::fixed << calculateDistance(vec1, vec2) << std::endl;

    return 0;
}