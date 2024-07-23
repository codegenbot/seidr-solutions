```cpp
#include <iostream>
#include <cmath>
#include <string>

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

    std::string v1_str[n], v2_str[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter value for dimension " << i + 1 << " of vector 1: ";
        std::cin >> v1_str[i];

        std::cout << "Enter value for dimension " << i + 1 << " of vector 2: ";
        std::cin >> v2_str[i];
    }

    float v1[n], v2[n];
    for (int i = 0; i < n; i++) {
        v1[i] = stof(v1_str[i]);
        v2[i] = stof(v2_str[i]);
    }

    float distance = calculateEuclideanDistance((float*)v1, (float*)v2, n);
    std::cout << "The Euclidean distance between the two vectors is: " << distance << endl;

    return 0;
}