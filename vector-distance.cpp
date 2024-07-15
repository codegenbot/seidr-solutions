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

    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    float result = std::sqrt(sum);
    std::cout << std::fixed << result << std::endl;

    return 0;
}