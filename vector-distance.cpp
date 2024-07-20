#include <iostream>
#include <cmath>

double vectorDistance(int n, float* v1, float* v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (v2[i] - v1[i]) * (v2[i] - v1[i]);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    float v1[n], *v1ptr = &v1[0], v2[n], *v2ptr = &v2[0];
    std::cout << "Enter vector 1: ";
    for (int i = 0; i < n; i++) {
        std::cin >> *(v1ptr++);
    }
    std::cout << "Enter vector 2: ";
    for (int i = 0; i < n; i++) {
        std::cin >> *(v2ptr++);
    }

    double distance = vectorDistance(n, v1ptr - n, v2ptr - n);
    std::cout << "Euclidean distance between the two vectors is: " << distance << std::endl;

    return 0;
}