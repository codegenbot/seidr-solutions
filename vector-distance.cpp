#include <iostream>
#include <cmath>

float calculateEuclideanDistance(float* vector1, float* vector2, int n) {
    float distance = 0;
    for (int i = 0; i < n; i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cout << "Enter the number of dimensions: ";
    std::cin >> n;

    float* vector1 = new float[n];
    float* vector2 = new float[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter value for dimension " << i + 1 << " of the first vector: ";
        std::cin >> vector1[i];
        std::cout << "Enter value for dimension " << i + 1 << " of the second vector: ";
        std::cin >> vector2[i];
    }

    float distance = calculateEuclideanDistance(vector1, vector2, n);

    std::cout << "The Euclidean distance between the two vectors is: " << distance << endl;

    delete[] vector1;
    delete[] vector2;

    return 0;
}