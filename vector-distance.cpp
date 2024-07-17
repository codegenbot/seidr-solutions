#include <cmath>
#include <vector>
#include <iostream>

double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    return sqrt(std::inner_product(vector1.begin(), vector1.end(), vector2.begin(), 0.0));
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