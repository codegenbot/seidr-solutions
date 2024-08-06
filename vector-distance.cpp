#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

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

    float sum = 0.0f;
    for (int i = 0; i < n; ++i) {
        float diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }

    float distance = std::sqrt(sum);
    std::cout << std::fixed << std::setprecision(13) << distance << std::endl;

    return 0;
}