#include <iostream>
#include <cmath>

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        sum += pow((b - a), 2);
    }
    return sqrt(sum);
}