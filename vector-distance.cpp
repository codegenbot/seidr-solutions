#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n), vec2(n);
    float sum = 0.0f;

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    std::cout << std::sqrt(sum) << std::endl;

    return 0;
}