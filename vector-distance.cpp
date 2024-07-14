#include <vector>
#include <iostream>

double calculateEuclideanDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double distance = 0.0;
    for (int i = 0; i < vec1.size(); ++i) {
        float diff = vec1[i] - vec2[i];
        distance += diff * diff;
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    for (auto& v : vec1) {
        std::cin >> v;
    }

    std::vector<float> vec2(n);
    for (auto& v : vec2) {
        std::cin >> v;
    }

    double distance = calculateEuclideanDistance(vec1, vec2);

    std::cout << distance << std::endl;

    return 0;
}