#include <cmath>
#include <iostream>

double vectorDistance() {
    int n;
    std::cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double val1, val2;
        std::cin >> val1 >> val2;
        sum += pow(val2 - val1, 2);
    }
    return sqrt(sum);
}