#include <cmath>
#include <vector>
#include <iostream>

double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double sum = 0;
    for (int i = 0; i < vector1.size(); ++i) {
        sum += (vector1[i] - vector2[i]) * (vector1[i] - vector2[i]);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vector1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector1[i];
    }

    std::vector<float> vector2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    std::cout << distance << std::endl;

    return 0;
}