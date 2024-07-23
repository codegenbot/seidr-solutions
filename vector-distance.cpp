#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vector1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector1[i];
    }

    std::vector<float> vector2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector2[i];
    }

    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vector1[i] - vector2[i], 2);
    }

    float distance = sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}