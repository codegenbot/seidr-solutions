#include <iostream>
#include <vector>
#include <cmath>

int main() {
    double n;
    std::cin >> n;
    std::vector<double> v1(n), v2(n);

    for (double i = 0; i < n; ++i) {
        std::cin >> v1[i];
    }
    
    for (double i = 0; i < n; ++i) {
        std::cin >> v2[i];
    }

    double sum = 0.0;
    for (double i = 0; i < n; ++i) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }

    std::cout << std::sqrt(sum) << std::endl;

    return 0;
}