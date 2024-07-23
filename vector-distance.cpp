#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double temp;
        std::cin >> temp;
        sum += (temp - vec2[i]) * (temp - vec2[i]);
    }
    
    std::cout << std::sqrt(sum) << std::endl;

    return 0;
}