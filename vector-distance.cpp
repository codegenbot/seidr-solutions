```
#include <iostream>
#include <cmath>

double vectorDistance(int n, float v1[], float v2[]) {
    double distance = 0.0; 
    for (int i = 0; i < n; i++) {
        double diff = pow((v2[i] - v1[i]), 2);
        distance += diff;
    }

    return sqrt(distance); 

}

int main() {
    std::cout << "Enter the dimension of vectors: ";
    int n;
    std::cin >> n;

    float v1[n];
    float v2[n];

    std::cout << "Enter vector 1 coordinates (space separated): ";
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cout << "Enter vector 2 coordinates (space separated): ";
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    double result = vectorDistance(n, v1, v2);
    std::cout << "Euclidean distance: " << result << std::endl;

    return 0;
}