#include <vector>
#include <iostream>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sumOfSquares = 0.0;

    for (int i = 0; i < vector1.size(); ++i) {
        double diff = vector1[i] - vector2[i];
        sumOfSquares += diff * diff;
    }

    return std::sqrt(sumOfSquares);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector1[i];
    }

    std::cin >> n;

    std::vector<double> vector2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector2[i];
    }

    double euclideanDistance = calculateEuclideanDistance(vector1, vector2);

    std::cout << euclideanDistance << std::endl;

    return 0;
}