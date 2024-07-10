```cpp
#include <cmath>
#include <vector>

double calculateDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double distance = 0.0;
    for (int i = 0; i < vector1.size(); ++i) {
        float diff = (vector1[i] - vector2[i]) * (vector1[i] - vector2[i]);
        distance += diff;
    }
    return std::sqrt(distance);
}

int main() {
    int dimension;
    std::cout << "Enter the dimension: ";
    std::cin >> dimension;

    std::vector<float> vector1(dimension);
    std::vector<float> vector2(dimension);

    for (int i = 0; i < dimension; ++i) {
        std::cout << "Enter element " << i + 1 << " of the first vector: ";
        std::cin >> vector1[i];
        std::cout << "Enter element " << i + 1 << " of the second vector: ";
        std::cin >> vector2[i];
    }

    double result = calculateDistance(vector1, vector2);
    std::cout << "Euclidean distance between two vectors is: " << result << std::endl;

    return 0;
}