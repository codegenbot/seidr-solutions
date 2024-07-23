#include <iostream>
#include <cmath>

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        std::string line;
        size_t pos = 0;
        double x, y;
        std::cin >> x >> y;
        sum += pow(y - x, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n; 
    double result = vectorDistance(n); 
    return 0;
}