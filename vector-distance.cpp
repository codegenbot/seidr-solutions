```cpp
#include <iostream>
#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        double num;
        std::cin >> num;
        v1[i] = num;
    }

    std::cin >> n;

    std::vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        double num;
        std::cin >> num;
        v2[i] = num;
    }

    std::cout << std::fixed << std::setprecision(15) << euclideanDistance(v1, v2) << std::endl;

    return 0;
}
```