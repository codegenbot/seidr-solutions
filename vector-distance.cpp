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
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        float num;
        std::cin >> num;
        vec1[i] = num;
    }

    std::vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        float num;
        std::cin >> num;
        vec2[i] = num;
    }

    std::cout << std::fixed << calculateDistance(vec1, vec2) << std::endl;

    return 0;
}