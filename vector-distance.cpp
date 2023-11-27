#include <vector>
#include <iostream>
#include <cmath>

double euclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;
    int n = std::min(vector1.size(), vector2.size());
    for (int i = 0; i < n; i++) {
        double diff = vector1[i] - vector2[i];
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
    double distance = euclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;
    return 0;
}