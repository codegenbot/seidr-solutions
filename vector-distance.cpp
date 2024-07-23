#include <iostream>
#include <cmath>
#include <vector>

template<typename T, std::size_t N>
float calculateEuclideanDistance(const std::vector<T>& v1, const std::vector<T>& v2) {
    float distance = 0;
    for (int i = 0; i < N; i++) {
        distance += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cout << "Enter the number of dimensions: ";
    std::cin >> n;

    std::vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter value for dimension " << i + 1 << " of vector 1: ";
        std::cin >> v1[i];

        std::cout << "Enter value for dimension " << i + 1 << " of vector 2: ";
        std::cin >> v2[i];
    }

    float distance = calculateEuclideanDistance(v1, v2);
    std::cout << "The Euclidean distance between the two vectors is: " << distance << std::endl;

    return 0;
}