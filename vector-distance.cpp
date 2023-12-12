```cpp
#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    if (v1.size() != v2.size()) {
        return -1; // or throw an exception
    }

    double sum = 0;
    for (size_t i = 0; i < v1.size(); i++) {
        sum += std::pow(v2[i] - v1[i], 2);
    }

    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cin >> n;

    std::vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    double distance = calculateDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}
```