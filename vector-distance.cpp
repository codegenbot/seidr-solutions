#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        char comma;
        std::cin >> vec1[i];
        if (i < n - 1) {
            std::cin >> comma;  // Read comma
        }
    }

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        char comma;
        std::cin >> vec2[i];
        if (i < n - 1) {
            std::cin >> comma;  // Read comma
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    double result = sqrt(sum);
    std::cout << std::fixed << std::setprecision(14) << result << std::endl;

    return 0;
}