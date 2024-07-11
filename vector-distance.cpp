#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> vec1(n); // Change from double to float
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    
    std::vector<float> vec2(n); // Change from double to float
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    float sum = 0.0; // Change from double to float
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]); // Update single precision arithmetic
    }
    
    float result = std::sqrt(sum); // Change from double to float
    std::cout << std::fixed << std::setprecision(12) << result << std::endl; // Update precision to 12
  
    return 0;
}