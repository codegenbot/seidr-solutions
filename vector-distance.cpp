#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        double diff = pow(x - y, 2);
        sum += diff;
    }
    return sqrt(sum);
}

int main() {
    std::cout << vectorDistance();
    return 0;
}