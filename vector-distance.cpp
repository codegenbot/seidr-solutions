#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(14);

    float x;
    std::vector<float> vec1, vec2;

    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        vec1.push_back(x);
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        vec2.push_back(x);
    }

    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    float result = std::sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}