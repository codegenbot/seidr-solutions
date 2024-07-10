#include <vector>
#include <iostream>

double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    if (vector1.size() != vector2.size()) {
        return -1.0;  // or throw an exception
    }
    
    double distance = 0.0;
    for (int i = 0; i < vector1.size(); ++i) {
        float diff = vector1[i] - vector2[i];
        distance += diff * diff;
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1, vec2;

    for (int i = 0; i < n; ++i) {
        float val;
        std::cin >> val;
        vec1.push_back(val);
    }

    for (int i = 0; i < n; ++i) {
        float val;
        std::cin >> val;
        vec2.push_back(val);
    }

    double distance = calculateEuclideanDistance(vec1, vec2);

    std::cout << distance << std::endl;

    return 0;
}