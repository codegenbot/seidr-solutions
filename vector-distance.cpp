#include <vector>
#include <iostream>
#include <cmath>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    int size = std::min(v1.size(), v2.size());
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n, m;
    std::cin >> n;

    std::vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cin >> m;

    std::vector<double> v2(m);
    for (int i = 0; i < m; i++) {
        std::cin >> v2[i];
    }

    double distance = euclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}