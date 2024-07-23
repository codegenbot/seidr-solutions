```c
#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n; 
    double sumX = 0, sumY = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        sumX += pow(x, 2);
        sumY += pow(y, 2);
    }
    return sqrt(sumX + sumY);
}