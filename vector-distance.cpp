#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    float result = 0.0;
    for (int i = 0; i < n; ++i) {
        result += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    result = std::sqrt(result);
    std::cout << std::fixed << std::setprecision(15) << result << std::endl;

    return 0;
}