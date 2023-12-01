#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sumOfSquares = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sumOfSquares += diff * diff;
    }
    return std::sqrt(sumOfSquares);
}

int main() {
    int dimension;
    std::cin >> dimension;

    std::vector<double> vector1(dimension);
    for (int i = 0; i < dimension; i++) {
        std::cin >> vector1[i];
    }

    std::cin >> dimension;

    std::vector<double> vector2(dimension);
    for (int i = 0; i < dimension; i++) {
        std::cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}