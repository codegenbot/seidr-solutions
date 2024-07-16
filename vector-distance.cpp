#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    long double sumSq = 0.0; // change to long double
    for (size_t i = 0; i < vec1.size(); ++i) {
        sumSq += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sumSq);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    for (auto& elem : vec1) std::cin >> elem;
    for (auto& elem : vec2) std::cin >> elem;

    double distance = calculateDistance(vec1, vec2);

    std::cout << distance << std::endl;

    return 0;
}