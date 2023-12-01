#include <iostream>
#include <vector>
#include <cmath>

float calculateDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    float sumOfSquares = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        sumOfSquares += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(sumOfSquares);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vector1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cin >> n;

    std::vector<float> vector2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    float distance = calculateDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}