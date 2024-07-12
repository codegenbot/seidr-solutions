#include <iostream>
#include <cmath>

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double val1, val2;
        std::cin >> val1 >> val2;
        sum += std::abs(val2 - val1);
    }
    return std::sqrt(sum);
}