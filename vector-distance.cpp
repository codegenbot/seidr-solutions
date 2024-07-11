#include <vector>
#include <iostream>

double vector_distance(std::vector<float> v1, std::vector<float> v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v1[i] - v2[i];
        distance += diff * diff;
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v1[i] >> v2[i];
    }

    double result = vector_distance(v1, v2);
    std::cout << std::fixed << std::setprecision(10) << result << std::endl;

    return 0;
}