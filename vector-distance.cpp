#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n;

    double sumX1 = 0, sumY1 = 0; // sums for first set of coordinates
    double sumX2 = 0, sumY2 = 0; // sums for second set of coordinates

    for (int i = 0; i < n; i++) {
        double x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        sumX1 += pow(x1, 2);
        sumY1 += pow(y1, 2);

        sumX2 += pow(x2, 2);
        sumY2 += pow(y2, 2);
    }

    double distance = sqrt(sumX1 + sumY1 - 2 * (sumX1 * sumX2 + sumY1 * sumY2) / ((n * (double)n) + (n * (double)n))) + 
                      sqrt(sumX2 + sumY2 - 2 * (sumX1 * sumX2 + sumY1 * sumY2) / ((n * (double)n) + (n * (double)n)));

    return distance;
}

int main() {
    double result = vectorDistance();
    std::cout << "Vector distance: " << result << std::endl;
    return 0;
}