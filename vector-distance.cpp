#include <iostream>
#include <cmath>

double calculateEuclideanDistance(double x1, double y1, double x2, double y2) {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        double x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        // Calculate Euclidean distance
        double distance = calculateEuclideanDistance(x1, y1, x2, y2);
        std::cout << "The Euclidean distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << distance << std::endl;
    }
    
    return 0;
}