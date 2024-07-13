#include <iostream>
#include <vector>
#include <cmath>

float calculateDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    float sum = 0.0f;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    for (int i = 0; i < n; ++i)
        std::cin >> vec1[i];

    std::vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        float val;
        char comma;
        std::cin >> val;
        vec2[i] = val;
        if (i < n - 1) {
            std::cin >> comma;
        }
    }

    std::cout << std::fixed << calculateDistance(vec1, vec2) << std::endl;

    return 0;
}