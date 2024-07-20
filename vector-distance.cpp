```cpp
#include <iostream>
#include <cmath>

double vectorDistance(int n, float v1[], float v2[]) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v2[i] - v1[i];
        sum += diff * diff;
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    float* v1 = new float[n], *v2 = new float[n];
    std::cout << "Enter vector 1 (elements separated by spaces): ";
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << " of vector 1: ";
        std::cin >> v1[i]; 
        std::cout << "Enter element " << i+1 << " of vector 2: ";
        std::cin >> v2[i];
    }

    double distance = vectorDistance(n, v1, v2);
    std::cout << "Euclidean distance between the two vectors is: " << distance << std::endl;

    delete[] v1;
    delete[] v2;

    return 0;
}