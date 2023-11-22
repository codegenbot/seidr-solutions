#include <iostream>
#include <vector>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    return sum;
}

int main() {
    // Read the dimensions of the vectors
    int n;
    std::cin >> n;

    // Read the elements of the first vector
    std::vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }
    
    // Read the elements of the second vector
    std::cin >> n;
    std::vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }
    
    // Calculate the Euclidean distance
    double distance = euclideanDistance(v1, v2);
    
    // Output the result
    std::cout << distance << std::endl;
    
    return 0;
}