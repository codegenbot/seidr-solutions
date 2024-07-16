#include <vector>
#include <cmath>
#include <iostream>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (int i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    // Input vec1
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    // Input vec2
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double distance = calculateDistance(vec1, vec2);
    std::cout << "Euclidean distance: " << distance << std::endl;

    return 0;
}