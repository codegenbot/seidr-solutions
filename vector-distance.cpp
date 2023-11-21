#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0;
    for (int i = 0; i < vector1.size(); i++) {
        sum += std::pow(vector1[i] - vector2[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::string inputLine;
    std::getline(std::cin, inputLine);  // Read the extra newline character

    std::getline(std::cin, inputLine);  // Read the line of values for vector2
    std::istringstream iss(inputLine);
    std::vector<double> vector2;
    double value;
    while (iss >> value) {
        vector2.push_back(value);
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout << std::fixed << std::setprecision(15) << distance << std::endl;

    return 0;
}