#include <iostream>
#include <cmath>
#include <string>

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        std::string a, b;
        std::cin >> a >> b;
        double x = std::stof(a);
        double y = std::stof(b);
        sum += pow((y - x), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n; 
    double result = vectorDistance(n); 
    return 0;
}