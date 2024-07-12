#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    if (n <= 0) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double result = 0.0;
    for (int i = 0; i < n; ++i) {
        result += std::pow(vec1[i] - vec2[i], 2);
    }

    result = std::sqrt(result);

    std::cout << std::fixed << result << std::endl;

    return 0;
}