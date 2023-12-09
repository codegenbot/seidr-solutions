```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

double euclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double distance = 0.0;
    for (std::vector<double>::size_type i = 0; i < vec1.size(); i++) {
        distance += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(distance);
}

int main() {
    std::vector<double>::size_type n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (std::vector<double>::size_type i = 0; i < n; i++) {
        std::cin >> vec1[i];
    }

    std::cin >> n;

    std::vector<double> vec2(n);
    for (std::vector<double>::size_type i = 0; i < n; i++) {
        std::cin >> vec2[i];
    }

    double distance = euclideanDistance(vec1, vec2);
    std::cout << std::fixed << std::setprecision(6) << distance << std::endl;

    return 0;
}
```