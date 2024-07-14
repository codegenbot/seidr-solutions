#include <vector>
#include <iostream>

double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    if (vector1.size() != vector2.size()) {
        std::cerr << "Vectors must have the same size." << std::endl;
        return -1.0; // or some other default value
    }

    double sum = 0.0;
    for (size_t i = 0; i < vector1.size(); ++i) {
        float diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }

    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vector1(n), vector2(n);

    for (float& val : vector1) {
        std::cin >> val;
    }
    for (float& val : vector2) {
        std::cin >> val;
    }

    double result = calculateEuclideanDistance(vector1, vector2);
    std::cout << result << std::endl;

    return 0;
}