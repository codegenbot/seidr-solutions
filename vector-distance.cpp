```cpp
#include <iostream>
#include <cmath>

float calculateEuclideanDistance(float v1[], float v2[], int n) {
    float distance = 0;
    for (int i = 0; i < n; i++) {
        distance += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cout << "Enter the number of dimensions: ";
    std::cin >> n;

    float* v1 = new float[n], *v2 = new float[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter value for dimension " << i + 1 << " of vector 1: ";
        std::cin >> (float)v1[i];

        std::cout << "Enter value for dimension " << i + 1 << " of vector 2: ";
        std::cin >> (float)v2[i];
    }

    float distance = calculateEuclideanDistance(v1, v2, n);
    std::cout << "The Euclidean distance between the two vectors is: " << distance << endl;

    delete[] v1;
    delete[] v2;

    return 0;
}