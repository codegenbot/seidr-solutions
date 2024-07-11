```cpp
#include <cmath>
#include <vector>
#include <iostream>

double vectorDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        sum += std::pow(diff, 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n; 
    std::vector<float> v1(n), v2(n); 
    for (float& val : v1) { std::cin >> val; }
    for (float& val : v2) { std::cin >> val; }
    double dist = vectorDistance(n, v1, v2);
    std::cout << "Euclidean distance: " << dist << std::endl;
    return 0;
}