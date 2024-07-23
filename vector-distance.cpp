#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    std::vector<float> vec2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    float sum = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    float distance = sqrt(sum);
    std::cout.precision(10);
    std::cout << distance << std::endl;

    return 0;
}