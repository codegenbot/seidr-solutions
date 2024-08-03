#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<long double> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    
    std::vector<long double> vec2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    long double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    long double distance = std::sqrt(sum);

    std::cout << std::fixed << std::setprecision(17) << distance << std::endl;

    return 0;
}