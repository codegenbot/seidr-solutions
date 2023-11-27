#include <vector>
#include <iostream>
#include <cmath>

long double euclideanDistance(const std::vector<long double>& v1, const std::vector<long double>& v2) {
    long double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        long double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<long double> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cin >> n;

    std::vector<long double> v2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    long double distance = euclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}