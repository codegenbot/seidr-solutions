#include <vector>
#include <iostream>
#include <cmath>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += std::pow(v1[i] - v2[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cin >> n;
    std::vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    double distance = euclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}