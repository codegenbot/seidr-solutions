#include <iostream>
#include <cmath>
#include <string>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double sumX = 0, sumY = 0;
    for (int i = 0; i < n; i++) {
        std::string x, y;
        std::cin >> x >> y;
        sumX += pow(stod(x), 2);
        sumY += pow(stod(y), 2);
    }
    return sqrt(sumX + sumY);
}

int main() {
    vectorDistance();
    return 0;
}