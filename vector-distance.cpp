#include <cmath>
#include <iostream>

double calculateEuclideanDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double v1Val, v2Val;
        std::cin >> v1Val >> v2Val;
        sum += std::pow(v2Val - v1Val, 2);
    }
    return std::sqrt(sum);
}