#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    int dimension;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> dimension;

    std::vector<float> vec1(dimension);
    std::vector<float> vec2(dimension);

    std::cout << "Enter the values of the first vector: ";
    for (int i = 0; i < dimension; ++i) {
        std::cin >> vec1[i];
    }

    std::cout << "Enter the values of the second vector: ";
    for (int i = 0; i < dimension; ++i) {
        std::cin >> vec2[i];
    }

    double result = calculateEuclideanDistance(vec1, vec2);

    std::cout << "Euclidean Distance: " << result << std::endl;

    return 0;
}