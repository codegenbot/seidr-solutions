#include <iostream>
#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> vec1[i];
    }

    std::cin >> n;

    std::vector<double> vec2(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> vec2[i];
    }

    if (vec1.size() != vec2.size()) {
        std::cout << "Vectors must have the same size";
        return 1;
    }

    double distance = euclideanDistance(vec1, vec2);
    std::cout << distance;

    return 0;
}