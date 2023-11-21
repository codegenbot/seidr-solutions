#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

float calculateDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    float sum = 0.0f;
    for (int i = 0; i < v1.size(); i++) {
        sum += powf(v1[i] - v2[i], 2);
    }
    return sqrtf(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cin >> n;

    std::vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    float distance = calculateDistance(v1, v2);
    std::cout << std::fixed << std::setprecision(2) << distance << std::endl;

    return 0;
}