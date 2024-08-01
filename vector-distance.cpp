#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        double x, y;
        std::cin >> x >> y;
        vec1[i] = x + y * 1i;
    }

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        double x, y;
        std::cin >> x >> y;
        vec2[i] = x + y * 1i;
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::norm(vec1[i] - vec2[i]);
    }

    double distance = std::sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}