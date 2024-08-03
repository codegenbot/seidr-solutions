#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    double distance = 0.0;
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
        distance += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    distance = std::sqrt(distance);

    std::cout << std::fixed << std::setprecision(15) << distance << std::endl;

    return 0;
}