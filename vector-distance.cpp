#include <iostream>
#include <cmath>
#include <vector>

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

    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    std::cout << std::sqrt(sum) << std::endl;

    return 0;
}