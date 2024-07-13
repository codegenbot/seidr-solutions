#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    long double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += static_cast<long double>((vec1[i] - vec2[i])) * static_cast<long double>((vec1[i] - vec2[i]));
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        double num;
        std::cin >> num;
        vec1[i] = num;
    }

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        double num;
        std::cin >> num;
        vec2[i] = num;
    }

    std::cout << std::fixed << calculateDistance(vec1, vec2) << std::endl;

    return 0;
}