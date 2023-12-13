```cpp
#include <iostream>
#include <cmath>
#include <vector>

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

    std::vector<double> v1;
    v1.reserve(n);
    for (int i = 0; i < n; i++) {
        double num;
        std::cin >> num;
        v1.push_back(num);
    }

    std::cin >> n;

    std::vector<double> v2;
    v2.reserve(n);
    for (int i = 0; i < n; i++) {
        double num;
        std::cin >> num;
        v2.push_back(num);
    }

    double distance = euclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}
```