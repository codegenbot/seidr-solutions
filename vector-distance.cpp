#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
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

    float distance = 0.0;
    for (int i = 0; i < n; ++i) {
        distance += std::pow(vec1[i] - vec2[i], 2);
    }

    distance = std::sqrt(distance);
    std::cout << distance << std::endl;

    return 0;
}