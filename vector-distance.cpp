#include <iostream>
#include <cmath>

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double a, b;
        std::cin >> a >> b;
        sum += pow((b - a), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n; 
    double result = vectorDistance(n);
    std::cout << result << std::endl; 
    return 0;
}