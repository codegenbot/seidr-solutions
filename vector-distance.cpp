#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
        if (i < n - 1) {
            char comma;
            std::cin >> comma; // Read and discard the comma between vector elements
        }
    }

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
        if (i < n - 1) {
            char comma;
            std::cin >> comma; // Read and discard the comma between vector elements
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    std::cout << std::sqrt(sum) << "\n";

    return 0;
}