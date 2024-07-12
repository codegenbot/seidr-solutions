#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n = 2;

    std::vector<float> vec1(n);
    std::vector<float> vec2(n);

    vec1[0] = 10.5;
    vec1[1] = 20.7;

    vec2[0] = 30.9;
    vec2[1] = 40.3;

    float result = 0.0f;
    for (int i = 0; i < n; ++i) {
        result += std::pow(vec1[i] - vec2[i], 2);
    }

    std::cout << std::fixed << std::sqrt(result) << std::endl;

    return 0;
}