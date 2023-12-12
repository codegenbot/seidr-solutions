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
    vec1.reserve(n); // Reserve memory for n elements

    for (int i = 0; i < n; i++) {
        double element;
        std::cin >> element;
        vec1.push_back(element);
    }

    std::vector<double> vec2;
    vec2.reserve(n); // Reserve memory for n elements

    for (int i = 0; i < n; i++) {
        double element;
        std::cin >> element;
        vec2.push_back(element);
    }

    double distance = euclideanDistance(vec1, vec2);
    std::cout << distance << std::endl;

    return 0;
}
```