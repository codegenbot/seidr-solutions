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

    float sum = 0.0f;
    for (int i = 0; i < n; ++i) {
        sum += powf(vec1[i] - vec2[i], 2);
    }
    double result = sqrt(sum);

    std::cout << static_cast<double>(result) << std::endl;

    return 0;
}