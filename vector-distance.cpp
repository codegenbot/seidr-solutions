#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double x1 = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        x1 += pow(x - y, 2);
    }
    return sqrt(x1);
}

int main() {
    std::cout << vectorDistance() << std::endl;
    return 0;
}