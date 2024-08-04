#include <iostream>
#include <vector>
#include <cmath>

int main() {
    size_t n;
    std::vector<double> vec1, vec2;
    double val;

    std::cin >> n;
    for (size_t i = 0; i < n; ++i) {
        std::cin >> val;
        vec1.push_back(val);
    }

    for (size_t i = 0; i < n; ++i) {
        std::cin >> val;
        vec2.push_back(val);
    }

    double sum = 0.0;
    for (size_t i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double result = sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}