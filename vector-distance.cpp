#include <vector>
#include <iostream>
#include <cmath>
#include <sstream>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    if (vector1.size() != vector2.size()) {
        return -1;
    }
    double sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sum += diff * diff;
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

    std::string line;
    std::getline(std::cin, line);
    std::replace(line.begin(), line.end(), ',', ' ');

    std::istringstream iss(line);
    std::vector<double> vector2;
    double val;
    while (iss >> val) {
        vector2.push_back(val);
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}