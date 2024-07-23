#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        sum1 += pow(x, 2);
        sum2 += pow(y, 2);
    }
    return sqrt(sum1 + sum2);
}

int main() {
    std::cout << vectorDistance() << std::endl;
    return 0;
}