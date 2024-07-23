```cpp
#include <iostream>
#include <cmath>
#include <vector>

float calculateEuclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    float distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cout << "Enter the number of dimensions: ";
    std::cin >> n;

    std::vector<float>(n), std::vector<float>(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter value for dimension " << i + 1 << " of vector 1: ";
        float v1Value;
        std::cin >> v1Value;

        std::cout << "Enter value for dimension " << i + 1 << " of vector 2: ";
        float v2Value;
        std::cin >> v2Value;

        // Initialize the vectors
        std::vector<float> v1({v1Value});
        std::vector<float> v2({v2Value});
    }

    float distance = calculateEuclideanDistance(v1, v2);
    std::cout << "The Euclidean distance between the two vectors is: " << distance << std::endl;

    return 0;
}