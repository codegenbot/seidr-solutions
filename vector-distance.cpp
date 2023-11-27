#include <vector>
#include <iostream>
#include <cmath>
#include <stdexcept>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    if (vector1.size() != vector2.size()) {
        throw std::logic_error("Vector sizes don't match");
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

    std::vector<double> vector2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    double distance;
    try {
        distance = calculateEuclideanDistance(vector1, vector2);
    } catch (const std::logic_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    std::cout << distance << std::endl;

    return 0;
}