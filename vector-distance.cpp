```cpp
#include <iostream>
#include <cmath>
#include <vector>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (size_t i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> v1;
    for (size_t i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        v1.push_back(val);
    }

    std::cin >> n;

    std::vector<double> v2;
    for (size_t i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        v2.push_back(val);
    }

    double distance = euclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}
```