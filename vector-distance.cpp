#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sum); // Return square root of the sum
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::vector<double> vec2(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    std::cout << calculateDistance(vec1, vec2) << std::endl; // Removed std::sqrt from here

    return 0; 
}