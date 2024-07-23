```c++
#include <iostream>
#include <vector>
#include <cmath>

double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    std::vector<float> v1 = {1.0f, 2.0f};
    std::vector<float> v2 = {3.0f, 4.0f};
    double distance = vectorDistance(v1, v2);
    printf("Euclidean distance: %f\n", distance);
    return 0;
}