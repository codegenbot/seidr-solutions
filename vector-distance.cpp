#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> v1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i];
    }
    
    std::vector<double> v2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(v1[i] - v2[i], 2);
    }
    
    double result = std::sqrt(sum);
    std::cout << result << std::endl;
    
    return 0;
}