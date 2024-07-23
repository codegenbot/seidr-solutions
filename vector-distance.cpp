#include <iostream>
#include <vector>
#include <cmath>

double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    if (v1.size() != v2.size()) {
        throw std::runtime_error("Vectors must be the same size");
    }
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow((v2[i] - v1[i]), 2);
    }
    
    return sqrt(sum);
}

int main() {
    std::vector<float> v1, v2;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        float val;
        std::cin >> val;
        v1.push_back(val);
    }

    for (int i = 0; i < n; i++) {
        float val;
        std::cin >> val;
        v2.push_back(val);
    }

    double distance = vectorDistance(v1, v2);
    printf("Euclidean distance: %f\n", distance);
    return 0;
}