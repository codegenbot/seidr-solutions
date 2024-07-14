#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double sumOfSquares = 0;
    float v1[n], v2[n];
    for (int i = 0; i < n; i++) {
        std::cin >> &v1[i] >> &v2[i];

        double differenceSquared = pow(v2[i] - v1[i], 2);
        sumOfSquares += differenceSquared;
    }
    return sqrt(sumOfSquares);
}