#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    double sum = 0;
    
    for (int i = 0; i < n; ++i) {
        double v1, v2;
        std::cin >> v1 >> v2;
        sum += (v1 - v2) * (v1 - v2);
    }

    double distance = sqrt(sum);
    std::cout << std::fixed << std::setprecision(14) << distance << std::endl;

    return 0;
}