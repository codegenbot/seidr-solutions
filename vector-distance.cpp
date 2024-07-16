```cpp
#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>

double calculateEuclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += std::pow(v2[i] - v1[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::string line;
    getline(std::cin, line);
    std::istringstream iss(line);
    iss >> n;

    for (int i = 0; i < n; i++) {
        double val1, val2;
        iss >> val1 >> val2;
        std::vector<double> v1(n), v2(n);
        for (int j = 0; j < n; j++) {
            v1.push_back(val1); v2.push_back(val2);
            val1 = val2 = 0.0;
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