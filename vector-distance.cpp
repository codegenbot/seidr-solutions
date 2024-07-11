#include <iostream>
#include <vector>
#include <cmath>

int main() {
    double n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        double temp;
        std::cin >> temp;
        vec1[i] = temp;
    }

    double m;
    std::cin >> m;
    std::vector<double> vec2(m);
    for (int i = 0; i < m; ++i) {
        double temp;
        std::cin >> temp;
        vec2[i] = temp;
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    double result = std::sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}