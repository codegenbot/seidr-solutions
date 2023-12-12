```cpp
#include <iostream>
#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1;
    vec1.reserve(n);

    for (int i = 0; i < n; i++) {
        double num;
        std::cin >> num;
        vec1.push_back(num);
    }

    std::cin >> n;

    std::vector<double> vec2;
    vec2.reserve(n);

    for (int i = 0; i < n; i++) {
        double num;
        std::cin >> num;
        vec2.push_back(num);
    }

    double distance = euclideanDistance(vec1, vec2);
    std::cout << distance << std::endl;

    return 0;
}
```