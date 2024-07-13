#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<float> v1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i];
    }

    std::cin >> n;
    std::vector<float> v2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v2[i];
    }

    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }

    float result = sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}