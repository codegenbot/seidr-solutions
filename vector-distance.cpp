#include <vector>
#include <iostream>
#include <cmath>

float euclideanDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    float distance = 0.0;
    int n = vec1.size();
    for (int i = 0; i < n; i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> vec1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec1[i];
    }

    std::cin >> n;
    std::vector<float> vec2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec2[i];
    }

    float distance = euclideanDistance(vec1, vec2);
    std::cout << distance << std::endl;

    return 0;
}