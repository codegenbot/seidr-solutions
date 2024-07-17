#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(int n, std::vector<double> v1, std::vector<double> v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = pow((v1[i] - v2[i]), 2);
        sum += diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n; 
    std::vector<double> v1(n), v2(n); 
    for (int i = 0; i < n; i++) { 
        std::cin >> v1[i] >> v2[i];
    }
    
    std::cout << std::fixed << std::setprecision(20) << calculateEuclideanDistance(n, v1, v2) << std::endl;
    return 0;
}