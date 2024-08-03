#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    std::vector<float> vec2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    float sum = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0.0f,
                                   [](float a, float b) {
                                       return a + (b - a) * (b - a);
                                   },
                                   std::plus<>());

    float distance = std::sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}