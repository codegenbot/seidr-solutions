#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double diff;
        std::cin >> diff;
        sum += diff * diff;
    }

    double result = std::sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}