```cpp
#include <iostream>
#include <cmath>
#include <vector>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (std::vector<double>::size_type i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<double> v1, v2;
    double val;
    std::size_t n;

    std::cin >> n;

    for (std::size_t i = 0; i < n; i++) {
        std::cin >> val;
        v1.push_back(val);
    }

    std::cin >> n;

    for (std::size_t i = 0; i < n; i++) {
        std::cin >> val;
        v2.push_back(val);
    }

    if (v1.size() != v2.size()) {
        std::cout << "Error: Vectors have different sizes" << std::endl;
        return 1;
    }

    double distance = euclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}
```