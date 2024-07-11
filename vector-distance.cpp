#include <iostream>
#include <vector>
#include <cmath>

int main() {
    double n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (double i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    double m;
    std::cin >> m;
    std::vector<double> vec2(m);
    for (double i = 0; i < m; ++i) {
        std::cin >> vec2[i];
    }

    double sum = 0.0;
    for (double i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    double result = std::sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}