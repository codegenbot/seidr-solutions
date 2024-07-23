```c
#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        sum += pow(y - x, 2);
    }
    return sqrt(sum);
}

int main() {
    return 0;
}