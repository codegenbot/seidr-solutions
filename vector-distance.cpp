#include <iostream>
#include <vector>
#include <cmath>

long double euclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    long double sum = 0.0;
    int size = std::min(vector1.size(), vector2.size());
    for (int i = 0; i < size; i++) {
        long double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cin >> n;

    std::vector<double> vector2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    long double distance = euclideanDistance(vector1, vector2);
    std::cout.precision(17);
    std::cout << std::fixed << distance << std::endl;

    return 0;
}