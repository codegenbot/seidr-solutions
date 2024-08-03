#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <stdexcept>

int main() {
    int n;
    if (!(std::cin >> n) || n <= 0) {
        std::cerr << "Invalid input for dimensions of vectors" << std::endl;
        return 1;
    }

    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> vec1[i])) {
            std::cerr << "Invalid input for vector 1" << std::endl;
            return 1;
        }
    }
    
    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> vec2[i])) {
            std::cerr << "Invalid input for vector 2" << std::endl;
            return 1;
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    double distance = std::sqrt(sum);

    std::cout << std::fixed << std::setprecision(17) << distance << std::endl;

    return 0;
}