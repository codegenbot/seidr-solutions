#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    
    std::cin >> n;
    std::vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    int m;
    std::cin >> m;
    std::vector<float> vec2(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> vec2[i];
    }

    float sum = 0.0;
    int minSize = std::min(n, m);
    for (int i = 0; i < minSize; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    float result = std::sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}