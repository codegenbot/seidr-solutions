#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double distance = 0.0;
    for (int i = 0; i < v1.size(); ++i) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vector1(n), vector2(n);

    for (float& val : vector1) {
        std::cin >> val;
    }

    for (float& val : vector2) {
        std::cin >> val;
    }

    std::cout << vectorDistance(vector1, vector2) << std::endl;

    return 0;
}