#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector1[i];
    }

    std::vector<double> vector2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector2[i];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (vector1[i] - vector2[i]) * (vector1[i] - vector2[i]);
    }

    double distance = sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}