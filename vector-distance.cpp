#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& a, const std::vector<double>& b) {
    double sum = 0.0;
    for (size_t i = 0; i < a.size(); i++) {
        sum += pow(a[i] - b[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vectorA(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vectorA[i];
    }

    std::cin >> n;

    std::vector<double> vectorB(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vectorB[i];
    }

    double distance = calculateDistance(vectorA, vectorB);
    std::cout << distance << std::endl;

    return 0;
}