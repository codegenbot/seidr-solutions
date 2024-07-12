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

    float result = 0.0;
    for (int i = 0; i < n; ++i) {
        float diff = vec1[i] - vec2[i];
        result += std::pow(diff, 2);
    }

    result = std::sqrt(result);
    std::cout << result << std::endl;

    return 0;
}