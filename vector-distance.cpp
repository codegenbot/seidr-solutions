```cpp
#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    long double sum = 0; // Change datatype to long double
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
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

    double distance = euclideanDistance(v1, v2);
    std::cout << std::fixed << std::setprecision(15) << distance << std::endl; // Set desired precision

    return 0;
}
```