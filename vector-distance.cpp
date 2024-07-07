#include <iostream>
#include <cmath>

double vectorDistance(int n) {
    double x1[n], x2[n];
    std::cin >> x1[0]; // Read first element of x1
    for (int i = 1; i < n; i++) {
        std::cin >> x1[i] >> x2[i];
    }
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(x2[i] - x1[i], 2.0);
    }
    return sqrt(sum); 
}