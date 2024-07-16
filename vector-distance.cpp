#include <iostream>
#include <cmath>
#include <vector>

double calculateEuclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += std::pow(v2[i] - v1[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::vector<double> v1(n), v2(n);
        for (int j = 0; j < n; j++) {
            std::cin >> v1[j] >> v2[j];
        }

        // Calculate Euclidean distance
        double distance = calculateEuclideanDistance(v1, v2);
        std::cout << "The Euclidean distance between (" ;
        for (int j = 0; j < n; j++) {
            std::cout << v1[j] << ", ";
        }
        std::cout << ") and (" ;
        for (int j = 0; j < n; j++) {
            std::cout << v2[j] << ", ";
        }
        std::cout << ") is: " << distance << std::endl;
    }
    
    return 0;
}