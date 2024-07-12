#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sumSq = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sumSq += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sumSq);
}

int main() {
    size_t n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    std::vector<double> vec1(n), vec2(n);

    std::cout << "Enter the elements of the first vector: ";
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::cout << "Enter the elements of the second vector: ";
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    const double result = calculateEuclideanDistance(vec1, vec2);
    std::cout << "Euclidean distance between the vectors: " << result << std::endl;

    return 0;
}