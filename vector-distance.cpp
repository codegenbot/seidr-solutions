#include <vector>
#include <iostream>

double calculateEuclideanDistance(std::vector<float> vector1, std::vector<float> vector2) {
    double distance = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vector1(n);
    for (float& val : vector1) {
        std::cin >> val;
    }

    std::vector<float> vector2(n);
    for (float& val : vector2) {
        std::cin >> val;
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    std::cout << std::fixed << std::setprecision(10) << distance << std::endl;

    return 0;
}