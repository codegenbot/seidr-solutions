#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    float diff, sum = 0.0f;
    std::vector<float> vec1(n), vec2(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
        diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }
    
    float distance = std::sqrt(sum);
    
    std::cout << distance << std::endl;
    
    return 0;
}