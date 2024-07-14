#include <iostream>
#include <cmath>
#include <vector>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double sumOfSquares = 0;
    std::vector<double> v1, v2;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);

        double differenceSquared = pow(v2[i] - v1[i], 2);
        sumOfSquares += differenceSquared;
    }
    return sqrt(sumOfSquares);
}