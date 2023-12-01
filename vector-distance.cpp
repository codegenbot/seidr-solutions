#include <vector>
#include <iostream>
#include <cmath>

// Function to calculate the Euclidean distance between two n-dimensional vectors
double calcEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    int n = vector1.size();
    double sum = 0;

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

    double distance = calcEuclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}