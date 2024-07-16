#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n;

    double sumX = 0;
    double sumY = 0;
    for (int i = 0; i < n; i++) {
        double x1, y1;
        std::cin >> x1 >> y1;
        sumX += pow(x1, 2);
        sumY += pow(y1, 2);
    }
    return sqrt(sumX + sumY);
}

int main() {
    double result = vectorDistance();
    std::cout << "Vector distance: " << result << std::endl;
    return 0;
}