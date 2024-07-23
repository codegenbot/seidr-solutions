#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<float> vec1(n), vec2(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    float distance = 0.0;
    for (int i = 0; i < n; ++i) {
        distance += pow(vec1[i] - vec2[i], 2);
    }

    std::cout << sqrt(distance) << std::endl;
    
    return 0;
}