```cpp
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

long double euclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    long double distance = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec1[i];
    }

    std::cin >> n;

    std::vector<double> vec2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec2[i];
    }

    long double distance = euclideanDistance(vec1, vec2);
    std::cout << std::fixed << std::setprecision(6) << distance << std::endl;

    return 0;
}
```