#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n;

    float v1[n];
    float v2[n];

    for (int i = 0; i < n; i++) {
        std::cin >> v1[i] >> v2[i];
    }

    double distance = 0.0; 
    for (int i = 0; i < n; i++) {
        double diff = pow((v2[i] - v1[i]), 2);
        distance += diff;
    }

    return sqrt(distance); 

}

int main() {
    double result = vectorDistance();
    std::cout << "Euclidean Distance: " << result << std::endl;
    return (0);
}