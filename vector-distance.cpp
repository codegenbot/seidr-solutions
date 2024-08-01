#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        std::cerr << "Error: Vectors must have the same size." << std::endl;
        return -1.0; // or some other error value
    }

    double sum = 0.0;
    for (int i = 0; i < v1.size(); ++i) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n);
    for (float& val : v1) {
        std::cin >> val;
    }

    std::vector<float> v2(n);
    for (float& val : v2) {
        std::cin >> val;
    }

    double distance = vectorDistance(v1, v2);

    std::cout << distance << std::endl;

    return 0;
}