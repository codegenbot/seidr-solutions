```cpp
#include <cmath>
#include <vector>
#include <stdexcept>

float calculateEuclideanDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != n || v2.size() != n) {
        throw std::runtime_error("Vectors must have the same size.");
    }
    float sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        float diff = pow((v1[i] - v2[i]), 2);
        sumOfSquares += diff;
    }
    return sqrt(sumOfSquares);
}

int main() {
    int n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    std::vector<float> v1(n, 0.0f), v2(n, 0.0f);

    std::cout << "Enter vector 1 elements: ";
    for (float &val : v1) {
        std::cin >> val;
    }

    std::cout << "Enter vector 2 elements: ";
    for (float &val : v2) {
        std::cin >> val;
    }

    try {
        float distance = calculateEuclideanDistance(n, v1, v2);
        std::cout << "The Euclidean distance between the two vectors is: " << distance << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
        return 1; // Return non-zero to indicate error
    }

    return 0;
}