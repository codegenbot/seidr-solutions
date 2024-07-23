```c++
#include <vector>
#include <cmath>
#include <iostream>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum); 
}

int main() {
    // Test your euclideanDistance function with some sample vectors
    std::vector<float> v1 = {1.0f, 2.0f, 3.0f};
    std::vector<float> v2 = {4.0f, 5.0f, 6.0f};
    double distance = euclideanDistance(v1, v2);
    std::cout << "Euclidean Distance: " << distance << std::endl;
    return 0;
}