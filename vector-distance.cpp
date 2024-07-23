#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n); // Change from double to float
    std::vector<float> vec2(n); // Change from double to float

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    float sum = 0; // Change from double to float
    
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    float distance = sqrt(sum); // Change from double to float
    std::cout.precision(15);
    std::cout << distance << std::endl;

    return 0;
}