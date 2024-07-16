#include <vector>
#include <cmath>
#include <iostream>

double calculateDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sum = 0.0;
    for (int i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    double distance = std::sqrt(sum);
    return distance;
}

int main() {
    int n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;
    
    std::vector<float> vec1(n);
    std::vector<float> vec2(n);

    std::cout << "Enter the elements of vector 1: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::cout << "Enter the elements of vector 2: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double distance = calculateDistance(vec1, vec2);
    std::cout << "Euclidean distance between the two vectors: " << distance << std::endl;

    return 0;
}