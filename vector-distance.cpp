```cpp
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

double vectorDistance(int n, std::vector<float> v1, std::vector<float> v2) {
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

    std::vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float val1, val2;
        std::cout << "Enter element " << i+1 << " of vector 1: ";
        std::cin >> val1;
        std::cout << "Enter element " << i+1 << " of vector 2: ";
        std::cin >> val2;
        v1[i] = val1; 
        v2[i] = val2;
    }

    double distance = vectorDistance(n, v1, v2);
    std::cout << "Euclidean distance between the two vectors is: " << distance << std::endl;

    return 0;
}