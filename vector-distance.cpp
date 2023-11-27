#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::string temp;
    std::getline(std::cin, temp);
    n = std::stoi(temp);

    std::string input;
    std::getline(std::cin, input);

    std::vector<double> vector1(n);
    std::stringstream ss1(input);
    for (int i = 0; i < n; i++) {
        ss1 >> vector1[i];
    }

    std::getline(std::cin, input);

    std::vector<double> vector2(n);
    std::stringstream ss2(input);
    for (int i = 0; i < n; i++) {
        ss2 >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout.precision(15);
    std::cout << distance << std::endl;

    return 0;
}