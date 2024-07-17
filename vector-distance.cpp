```cpp
#include <iostream>
#include <cmath>
#include <vector>

double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double sum = 0;
    if (vector1.size() != vector2.size()) {
        return -1; 
    }
    for (int i = 0; i < vector1.size(); ++i) {
        sum += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> vec1 = {1.0f, 2.0f};
    std::vector<float> vec2 = {3.0f, 4.0f};
    double dist = calculateEuclideanDistance(vec1, vec2);
    std::cout << "Euclidean distance: " << dist << std::endl;
    return 0;
}