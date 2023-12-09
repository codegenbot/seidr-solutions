```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

double euclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double distance = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        distance += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1;
    vec1.reserve(n);
    for (int i = 0; i < n; i++) {
        double value;
        std::cin >> value;
        vec1.push_back(value);
    }

    std::cin >> n;

    std::vector<double> vec2;
    vec2.reserve(n);
    for (int i = 0; i < n; i++) {
        double value;
        std::cin >> value;
        vec2.push_back(value);
    }

    double distance = euclideanDistance(vec1, vec2);
    std::cout << std::fixed << std::setprecision(6) << distance << std::endl;

    return 0;
}
```