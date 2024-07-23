#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n), vec2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }
    float result = std::sqrt(sum);  // Calculate the square root of the sum of squared differences

    std::cout << std::fixed << result << std::endl;

    return 0;
}