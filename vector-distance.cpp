#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, y1;
        std::cin >> x1 >> y1;
        sum += pow(y1 - x1, 2);
    }
    return sqrt(sum);
}