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
    vec1.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec1[i];
    }

    std::vector<double> vec2; // Add this line to declare vec2 as a vector of doubles
    std::cin >> n;

    vec2.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec2[i];
    }

    double distance = euclideanDistance(vec1, vec2);
    std::cout << std::fixed << std::setprecision(15) << distance << std::endl;

    return 0;
}
```