```cpp
#include <cmath>
#include <vector>
#include <iostream>

double calculateEuclideanDistance(int n, std::vector<float>& v1, std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        float v1Val = v1[i];
        float v2Val = v2[i];
        sum += std::pow(v2Val - v1Val, 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v1[i] >> v2[i];
    }

    double distance = calculateEuclideanDistance(n, v1, v2);
    std::cout << "The Euclidean distance is: " << distance << std::endl;

    return 0;
}