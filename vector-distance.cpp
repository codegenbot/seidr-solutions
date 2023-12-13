```cpp
#include <vector>
#include <iostream>
#include <cmath>

long double euclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    long double sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        long double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }
    return std::hypot(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (auto& value : vector1) {
        std::cin >> value;
    }

    std::cin >> n;

    std::vector<double> vector2(n);
    for (auto& value : vector2) {
        std::cin >> value;
    }

    std::cout << std::fixed << std::setprecision(15) << euclideanDistance(vector1, vector2) << std::endl;

    return 0;
}
```