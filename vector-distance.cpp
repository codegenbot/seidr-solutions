#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(int n, std::vector<double> v1, std::vector<double> v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        sum += pow(diff, 2);
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
    
    double distance = calculateEuclideanDistance(n, v1, v2);
    std::cout << std::fixed << std::setprecision(20) << distance << std::endl;
    return 0;
}