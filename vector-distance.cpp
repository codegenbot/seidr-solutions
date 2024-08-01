#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        double val1, val2;
        std::cin >> val1 >> val2;
        vec2[i] = val1 - val2;
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    double distance = std::sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}