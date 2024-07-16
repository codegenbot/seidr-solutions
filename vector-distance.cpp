#include <iostream>
#include <cmath>

double calculateEuclideanDistance(double *x1, double *y1, double *x2, double *y2) {
    int n;
    std::cin >> n;

    double sumX = 0;
    double sumY = 0;

    for (int i = 0; i < n; i++) {
        sumX += std::pow(x2[i] - x1[i], 2);
        sumY += std::pow(y2[i] - y1[i], 2);
    }

    return std::sqrt(sumX + sumY);
}

int main() {
    int n;
    std::cin >> n;

    double x1[n];
    double y1[n];
    double x2[n];
    double y2[n];

    for (int i = 0; i < n; i++) {
        std::cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Calculate Euclidean distance
    double distance = calculateEuclideanDistance(x1, y1, x2, y2);
    std::cout << "The Euclidean distance between two vectors is: " << distance << std::endl;
    
    return 0;
}