#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <limits>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
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
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    std::string input;
    std::cout << "Enter the elements of the first vector: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    for (size_t i = 0; i < n; ++i) {
        iss >> vec1[i];
    }

    std::cout << "Enter the elements of the second vector: ";
    std::getline(std::cin, input);

    iss.clear();
    iss.str(input);
    for (size_t i = 0; i < n; ++i) {
        iss >> vec2[i];
    }

    double distance = calculateDistance(vec1, vec2);

    std::cout << "Euclidean distance between the two vectors: " << distance << std::endl;

    return 0;
}