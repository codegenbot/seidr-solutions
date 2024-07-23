#include <cmath>

int n;
std::cin >> n;

std::vector<double> vec1(n);
for (auto &elem : vec1) {
    std::cin >> elem;
}

std::vector<double> vec2(n);
for (auto &elem : vec2) {
    std::cin >> elem;
}

double sum = 0.0;
for (int i = 0; i < n; ++i) {
    sum += std::pow(vec1[i] - vec2[i], 2);
}

double distance = std::sqrt(sum);