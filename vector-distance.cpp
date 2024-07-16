#include <iostream>
#include <cmath>

double calculateEuclideanDistance(double* vector1, double* vector2, int n) {
    double distance = 0;
    for (int i = 0; i < n; i++) {
        distance += std::pow(vector2[i] - vector1[i], 2);
    }
    return std::sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        double vector1[n], vector2[n];
        for (int j = 0; j < n; j++) {
            std::cin >> vector1[j] >> vector2[j];
        }
        double distance = calculateEuclideanDistance(vector1, vector2, n);
        std::cout << "The Euclidean distance between ";
        for (int j = 0; j < n; j++) {
            if(j == 0) {
                std::cout << "(";
            } else if(j == n-1) {
                std::cout << ", " << vector1[j] << ") and (" << vector2[j];
                for(int k = 0; k < n-1; k++) {
                    std::cout << ", " << vector2[k];
                }
                std::cout << ") is: " << distance << std::endl;
            } else {
                std::cout << ", " << vector1[j];
            }
        }
    }
    
    return 0;
}